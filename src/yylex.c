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

char * yylex()
{

}

void yyerror(char * errstr)
{
	fprintf(stderr,"%s\n",errstr);
	exit(-1);
}
