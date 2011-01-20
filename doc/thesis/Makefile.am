
LATEXSOURCE=EnglishParser

EXTRA_INTERMEDIAFILE=EnglishParser.dvi

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean
	$(LaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(LaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(BiBTeX) $(LATEXSOURCE)
	$(LaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(LaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(PDFLaTeX) -interaction=nonstopmode $(LATEXSOURCE)


# makefile for thesis 
