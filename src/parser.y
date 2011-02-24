 
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

Sentence : sentence punct {

			//outputsentence
			output_sentence($1,$2);			

		};


punct: '.'| '?' ;


sentence : NP VP {

		$$ = build_sentence_NP_VP($1,$2);
		
	};
					
					

VP : V NP {
		$$ = build_VP_V_NP($1,$2);

	 };

NP : Det NP  {
		$$ = build_NP_N_NP($1,$2);					  
			}
			 
	| Prot {
 		$$ = $1; 		
 		}
 		
 	| N {
 		$$ = $1;
 	}	
	;
	
	
	