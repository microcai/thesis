
LATEXSOURCE=任务书

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean  compile
	$(MAKE) compile
	$(MAKE) compile

# makefile for thesis 
