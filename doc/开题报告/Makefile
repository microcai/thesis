SOURCE=report
PDF=report.pdf
HTML=report.html

INTERMEDIAFILE=missfont.log report.aux report.log report.out report.toc report.bbl $(SOURCE).blg

XeLaTeX=xelatex
BiBTeX=bibtex
TEXINPUTS="../fontsetup/Have_Adobe_and_TimesNewRoman/:"

all:$(PDF)

.phone: compile 

compile:
	env TEXINPUTS=$(TEXINPUTS) $(XeLaTeX) -interaction=nonstopmode $(SOURCE)

$(INTERMEDIAFILE) $(PDF):$(SOURCE).tex ../reference.bib
	$(MAKE) clean  compile
	$(MAKE) compile
	$(BiBTeX) $(SOURCE)
	$(MAKE) compile
	$(MAKE) compile

clean-all:clean
	rm ${PDF}
clean:
	-$(RM) $(INTERMEDIAFILE) 
