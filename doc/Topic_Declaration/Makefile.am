
LATEXSOURCE=选题申报表

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean  compile
	$(MAKE) compile
	$(MAKE) compile

# makefile for thesis 
