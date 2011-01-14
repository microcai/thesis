
LATEXSOURCE=文献综述

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex summarize_table.tex summarize_body.tex $(BIBSRC)
	$(MAKE) clean  
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(BiBTeX) $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)


# makefile for thesis 
