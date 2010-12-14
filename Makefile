SOURCE=MachineTranslate.tex
PDF=MachineTranslate.pdf
HTML=MachineTranslate.html

INTERMEDIAFILE=MachineTranslate.aux MachineTranslate.log MachineTranslate.out

XeLaTeX=xelatex

all:$(PDF)

$(INTERMEDIAFILE) $(PDF):$(SOURCE) 
	$(XeLaTeX) -interaction=nonstopmode $(SOURCE)
	$(RM) $(INTERMEDIAFILE)
clean:
	$(RM) $(INTERMEDIAFILE) $(PDF)
