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

xmlNodePtr build_NP_N_NP(xmlNodePtr pN, xmlNodePtr pNP)
{
	xmlNodePtr ret;
	ret = pN->parent = pNP->parent = xmlNewNode(NULL,typetostr(NP));
	xmlAddChild(ret,pN);
	xmlAddChild(ret,pNP);
	return ret;
}

xmlNodePtr build_VP_V_NP(xmlNodePtr pV, xmlNodePtr pNP)
{
	xmlNodePtr ret;
	ret = pV->parent = pNP->parent = xmlNewNode(NULL,typetostr(VP));
	xmlAddChild(ret,pV);
	xmlAddChild(ret,pNP);
	return ret;
}

