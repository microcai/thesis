/*
 * parser.y : Bison Grammer File for parser program.
 *
 *
 *
 *
 */
 
/*Let's Define the structure of the sentence*/

%token sentence 


%%

Sentence : sentence punct ;


punct: '.' '?' ;
