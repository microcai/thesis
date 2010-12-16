SOURCE=report.tex
PDF=report.pdf
HTML=report.html

INTERMEDIAFILE=missfont.log report.aux report.log report.out report.toc
XeLaTeX=xelatex

all:$(PDF)

$(INTERMEDIAFILE) $(PDF):$(SOURCE) 
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
	$(RM) $(INTERMEDIAFILE)
clean:
	$(RM) $(INTERMEDIAFILE) $(PDF)
