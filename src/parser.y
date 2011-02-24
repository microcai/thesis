 
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
					  
				} 
	| Prot {
 			 	
			  }
	;
	
	
	