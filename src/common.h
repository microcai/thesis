/*
 * common.h
 *
 *  Created on: 2011-1-6
 *      Author: cai
 */

#ifndef COMMON_H_
#define COMMON_H_

#define YYINITDEPTH	1024
#define YYSTYPE yystype

enum	yyexttype{
	NP	=	1024 ,
	VP,
};

typedef struct yystype yystype;

struct yystype{
	 int type;
	 char * word;
	 union{
		 struct type_VP{
			 yystype * V,*NP;
		 }type_VP;
		 struct type_NP{
			 yystype * Det;
			 yystype *NP;
		 }type_NP;
	 }t;
};


#endif /* COMMON_H_ */
