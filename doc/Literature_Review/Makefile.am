
LATEXSOURCE=文献综述

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex summarize_table.tex summarize_body.tex $(BIBSRC)
	$(MAKE) clean  compile
	$(MAKE) compile
	$(BiBTeX) $(SOURCE)
	$(MAKE) compile
	$(MAKE) compile

# makefile for thesis 
