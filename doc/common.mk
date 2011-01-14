XeLaTeX=xelatex
BiBTeX=bibtex

BIBSRC=$(top_builddir)/doc/common/reference.bib

PDF=$(LATEXSOURCE).pdf



.phone: distdir all pdf-local compile 

pdf-local:$(PDF)
	
INTERMEDIAFILE=missfont.log $(LATEXSOURCE).aux $(LATEXSOURCE).log $(LATEXSOURCE).out $(LATEXSOURCE).toc $(LATEXSOURCE).bbl $(LATEXSOURCE).blg

distclean-local:clean
	-$(RM) ${PDF}
clean-local:
	-$(RM) $(INTERMEDIAFILE) $(EXTRA_INTERMEDIAFILE)

compile:
	$(XeLaTeX) -interaction=nonstopmode $(LATEXSOURCE)

