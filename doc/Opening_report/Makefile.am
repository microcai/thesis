
LATEXSOURCE=开题报告

include ../common.mk

.phone: compile 

$(PDF):$(LATEXSOURCE).tex report_body.tex $(BIBSRC)
	$(MAKE) clean
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(BiBTeX) $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)


# makefile for thesis 
