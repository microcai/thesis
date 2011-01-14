
AUTOMAKE_OPTIONS=no-dependencies  

include ../common.mk


LATEXSOURCE=承诺书

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean  
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
distdir-local:
	hah



# makefile for thesis 
