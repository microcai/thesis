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


//"Jhon Hit The Ball";

int S[] = {Prot , V , Det , N , '.' , 0 , 0};

char * s[] = { "Jhon" , "Hit" , "The" , "Ball" , "."};

int yylex()
{
	static l=0;

	xmlNodePtr cur = xmlNewNode(NULL,typetostr(S[l]));
	xmlNodeAddContent(cur,s[l]);

	yylval  = cur;
	return S[l++];
}

void yyerror(char * errstr)
{
	fprintf(stderr,"%s\n",errstr);
	exit(-1);
}
