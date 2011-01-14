XeLaTeX=xelatex
BiBTeX=bibtex

BIBSRC=$(top_builddir)/doc/common/reference.bib

PDF=$(LATEXSOURCE).pdf

EXTRA_DIST = $(LATEXSOURCE).tex

pdf-local:$(PDF)
	
INTERMEDIAFILE=missfont.log $(LATEXSOURCE).aux $(LATEXSOURCE).log $(LATEXSOURCE).out $(LATEXSOURCE).toc $(LATEXSOURCE).bbl $(LATEXSOURCE).blg

distclean-local:clean
	-$(RM) ${PDF}
clean-local:
	-$(RM) $(INTERMEDIAFILE) $(EXTRA_INTERMEDIAFILE)


