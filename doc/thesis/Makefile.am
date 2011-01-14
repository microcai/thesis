
LATEXSOURCE=EnglishParser

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean  compile
	$(MAKE) compile
	$(BiBTeX) $(SOURCE)
	$(MAKE) compile
	$(MAKE) compile

# makefile for thesis 
