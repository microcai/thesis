/*
 * main.c
 *
 *  Created on: 2011-1-6
 *      Author: cai
 */

#include "parser.h"
#include <libxml/xmlmemory.h>
int main()
{
	xmlInitGlobals();
	xmlInitMemory();
	yyparse();
	xmlCleanupGlobals();
	xmlCleanupMemory();
}
