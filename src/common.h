/*
 * common.h
 *
 *  Created on: 2011-1-6
 *      Author: cai
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <glib.h>
#include <libxml/tree.h>

#define YYINITDEPTH	1024
#define YYSTYPE xmlNodePtr

#define YYPARSE_PARAM ptr

enum	yyexttype{
	sentence = 1024,
	NP,
	VP,
};

const char * typetostr(int yytokentype);

int yyparse (void *YYPARSE_PARAM);

void init_yylex(gchar ** tokens);

#endif /* COMMON_H_ */
