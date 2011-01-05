 
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


/*Let's Define the structure of the sentence*/

%token V N Det Prot


%%

Sentence : sentence punct ;


punct: '.'| '?' ;


sentence : NP VP ;

VP : V NP { };

NP : Det N  { printf("Det = %s, N=%s\n", $1.word ,$2.word );  } 

	| Prot { printf("Got Prot %s\n",$1.word ); };
