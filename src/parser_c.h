/*
 * parser_c.h
 *
 *  Created on: 2011-2-24
 *      Author: cai
 */

#ifndef PARSER_C_H_
#define PARSER_C_H_

xmlNodePtr build_NP_N_NP(xmlNodePtr pN, xmlNodePtr pP);
xmlNodePtr build_VP_V_NP(xmlNodePtr pV, xmlNodePtr pNP);

xmlNodePtr build_sentence_NP_VP(xmlNodePtr pNP, xmlNodePtr pVP);

void output_sentence(xmlNodePtr sentence, xmlNodePtr punct);
#endif /* PARSER_C_H_ */
