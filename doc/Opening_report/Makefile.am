
LATEXSOURCE=开题报告

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex report_body.tex $(BIBSRC)
	$(MAKE) clean  compile
	$(MAKE) compile
	$(BiBTeX) $(SOURCE)
	$(MAKE) compile
	$(MAKE) compile

# makefile for thesis 
