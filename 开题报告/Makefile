SOURCE=report
PDF=report.pdf
HTML=report.html

INTERMEDIAFILE=missfont.log report.aux report.log report.out report.toc report.bbl $(SOURCE).blg

XeLaTeX=xelatex
BiBTeX=bibtex

all:$(PDF)

$(INTERMEDIAFILE) $(PDF):$(SOURCE).tex ../thesisbib.bib
	$(RM) $(INTERMEDIAFILE)
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
	$(BiBTeX) $(SOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
clean:
	$(RM) $(INTERMEDIAFILE) $(PDF)
