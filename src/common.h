/*
 * common.h
 *
 *  Created on: 2011-1-6
 *      Author: cai
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <libxml/tree.h>

#define YYINITDEPTH	1024
#define YYSTYPE xmlNodePtr

enum	yyexttype{
	NP	=	1024 ,
	VP,
};

const char * typetostr(int yytokentype);

#endif /* COMMON_H_ */
