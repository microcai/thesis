/*
 * praser_c.c
 *
 *  Created on: 2011-2-24
 *      Author: cai
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <unistd.h>
#include <libxml/tree.h>
#include <libxml/xmlIO.h>
#include <libxml/xmlsave.h>
#include "common.h"
#include "parser.h"
#include "parser_c.h"

xmlNodePtr build_NP_N_NP(xmlNodePtr pN, xmlNodePtr pNP)
{
	xmlNodePtr ret;
	ret =  xmlNewNode(NULL,typetostr(NP));
	xmlAddChild(ret,pN);
	xmlAddChild(ret,pNP);
	return ret;
}

xmlNodePtr build_VP_V_NP(xmlNodePtr pV, xmlNodePtr pNP)
{
	xmlNodePtr ret;
	ret = xmlNewNode(NULL,typetostr(VP));
	xmlAddChild(ret,pV);
	xmlAddChild(ret,pNP);
	return ret;
}

xmlNodePtr build_sentence_NP_VP(xmlNodePtr pNP, xmlNodePtr pVP)
{
	xmlNodePtr ret;
	//ret = pNP->parent = pVP->parent = xmlNewNode(NULL,typetostr(sentence));
	ret = xmlNewNode(NULL,typetostr(sentence));
	xmlAddChild(ret,pNP);
	xmlAddChild(ret,pVP);
	return ret;
}

void output_sentence(xmlNodePtr sentence, xmlNodePtr punct)
{
	xmlSaveCtxtPtr saver = 	xmlSaveToFd(2,"UTF-8",0);

	xmlSaveTree(saver,sentence);
	xmlSaveFlush(saver);
	xmlSaveClose(saver);
	write(2,"\n",1);
}
