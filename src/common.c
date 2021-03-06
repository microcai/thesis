/*
 * common.c
 *
 *  Created on: 2011-2-24
 *      Author: cai
 */

#include "common.h"
#include "parser.h"

const char * typetostr(int yytokentype)
{
	switch(yytokentype)
	{
	case V:
		return "V";
	case N:
		return "N";
	case Det:
		return "Det";
	case Prot:
		return "Prot";
	case NP:
		return "NP";
	case VP:
		return "VP";
	case sentence:
		return "sentence";
	default:
		return "";
	}
}
