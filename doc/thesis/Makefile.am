
LATEXSOURCE=EnglishParser

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex $(BIBSRC)
	$(MAKE) clean
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(BiBTeX) $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)


# makefile for thesis 
