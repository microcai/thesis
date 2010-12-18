SOURCE=summarize
PDF=$(SOURCE).pdf
HTML=$(SOURCE).html

INTERMEDIAFILE=missfont.log $(SOURCE).aux $(SOURCE).log $(SOURCE).out $(SOURCE).toc $(SOURCE).bbl $(SOURCE).blg  $(SOURCE).dvi

LaTeX=latex
BiBTeX=bibtex

all:$(PDF)

$(INTERMEDIAFILE) $(PDF):$(SOURCE).tex ../thesisbib.bib summarize_body.tex
	$(RM) $(INTERMEDIAFILE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(BiBTeX) $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	dvipdfmx $(SOURCE).dvi
clean:
	$(RM) $(INTERMEDIAFILE) $(PDF)
