
LATEXSOURCE=选题申报表

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)

# makefile for thesis 
