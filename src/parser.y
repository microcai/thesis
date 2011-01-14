 
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
							printf("Got Prot %s\n",$1.word ); 
							
							
					   }
						 ;

VP : V NP {

		$0.type	= VP;
		
					YYSTYPE	* v, * np;
					v = malloc(sizeof(YYSTYPE));
					np = malloc(sizeof(YYSTYPE));
					
					*v = $1; *np = $2;
		
		
		printf("Got V=%s", $1.word);
		
		$0.t.type_VP = (struct type_VP){ v,np };		

	 };

NP : Det N  {
					$0.type = NP;
					
					YYSTYPE	* det, *n , * np;
					det = malloc(sizeof(YYSTYPE));
					n = malloc(sizeof(YYSTYPE));
					
					*det = $1;
					*n = $2;
					
					$0.t.type_NP = (struct type_NP){ n , det };
					
					printf("Det = %s, N=%s\n", $1.word ,$2.word );
					  
				} 
	| Prot {
				 $0.type = NP;

	    		 YYSTYPE	* prot;
   			 prot = malloc(sizeof(YYSTYPE));
   			 
   		 	 *prot = $1;
   		 	  
   		 	      $0.t.type_NP = (struct type_NP){ NULL, prot };
 			 	
			  }
	;
	
	
	