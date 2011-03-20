/*
 * yylex.c
 *
 * This file is temp, will be replaced when HMM is done
 *
 *  Created on: 2011-1-6
 *      Author: cai
 */

#include <stdio.h>
#include <stdlib.h>
#include <libxml/xpath.h>


#include "common.h"
#include "parser.h"

static GSList * token_list = NULL;
static GSList * type_list = NULL;

#if 1

void init_yylex(gchar ** tokens)
{
	/*
	gchar ** token = tokens;
	while(token)
	{
		token_list = g_slist_append(token_list,token++);
	}
	*/

	//"Jhon Hit The Ball .";

	token_list = g_slist_append(token_list,"Jhon");
	token_list = g_slist_append(token_list,"Hit");
	token_list = g_slist_append(token_list,"The");
	token_list = g_slist_append(token_list,"Ball");
	token_list = g_slist_append(token_list,".");
	token_list = g_slist_append(token_list,"");


	type_list = g_slist_append(type_list,GINT_TO_POINTER(Prot));
	type_list = g_slist_append(type_list,GINT_TO_POINTER(V));
	type_list = g_slist_append(type_list,GINT_TO_POINTER(Det));
	type_list = g_slist_append(type_list,GINT_TO_POINTER(N));
	type_list = g_slist_append(type_list,GINT_TO_POINTER('.'));
	type_list = g_slist_append(type_list,GINT_TO_POINTER(0));

}
#endif

int yylex()
{
	int ret;

	GSList * curtoken = g_slist_nth(token_list,0);
	GSList * curtype = g_slist_nth(type_list,0);

	xmlNodePtr cur = xmlNewNode(NULL,typetostr( GPOINTER_TO_INT(curtype->data) ));
	cur->content = xmlMemoryStrdup(curtoken->data);
	xmlNodeSetContent(cur,curtoken->data);

	yylval  = cur;
	ret = GPOINTER_TO_INT(curtype->data);

	token_list = g_slist_delete_link(token_list,curtoken);
	type_list = g_slist_delete_link(type_list,curtype);
	return ret;
}

void yyerror(char * errstr)
{
	fprintf(stderr,"%s\n",errstr);
	exit(-1);
}
