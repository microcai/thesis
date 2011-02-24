 
%{
/*
 * parser.y : Bison Grammer File for parser program.
 *
 *
 *
 *
 */

#include <stdio.h>
#include "common.h"
#include "parser_c.h"


%}

//%type yystype


/*Let's Define the structure of the sentence*/

%token V N Det Prot 


%%

Sentence : sentence punct ;


punct: '.'| '?' ;


sentence : NP VP {

					};
					
					

VP : V NP {



	 };

NP : Det N  {
		$0 = build_NP_N_P($1,$2);
					  
				} 
	| Prot {
 		$0 = $1; 		
 		}
	;
	
	
	