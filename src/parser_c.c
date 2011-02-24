/*
 * praser_c.c
 *
 *  Created on: 2011-2-24
 *      Author: cai
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <libxml/tree.h>
#include "common.h"
#include "parser.h"
#include "parser_c.h"

xmlNodePtr build_NP_N_P(xmlNodePtr pN, xmlNodePtr pP)
{
	xmlNodePtr ret;
	ret = pN->parent = pP->parent = xmlNewNode(NULL,typetostr(NP));
	xmlAddChild(ret,pN);
	xmlAddChild(ret,pP);
	return ret;
}
