/*
 * main.c
 *
 *  Created on: 2011-1-6
 *      Author: cai
 */

#include <glib.h>
#include <libxml/xmlmemory.h>
#include <libxml/tree.h>
#include <libxml/xmlIO.h>
#include <libxml/xmlsave.h>

#include "common.h"
#include "parser.h"

int main(int argc, char * argv[])
{
	xmlNodePtr sentence;
	gchar ** tokens;

	GString * linebuffer = g_string_new("");

	GIOChannel * in = g_io_channel_unix_new(fileno(stdin));

	//首先读取一行文字
	g_io_channel_read_line_string(in,linebuffer,NULL,NULL);

	//分割
	tokens = g_strsplit_set(linebuffer->str," ",1024);

	//为此行文字打标记
	init_yylex(tokens);

	//打好词性标记后开始解析语法结构
	xmlInitGlobals();
	xmlInitMemory();
	yyparse(&sentence);
	xmlCleanupGlobals();
	xmlCleanupMemory();

	xmlSaveCtxtPtr saver = 	xmlSaveToFd(2,"UTF-8",0);

	xmlSaveTree(saver,sentence);
	xmlSaveFlush(saver);
	xmlSaveClose(saver);
	write(2,"\n",1);

	//输出语法树， 以 XML 形式
	return 0;
}
