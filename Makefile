SOURCE=MachineTranslate.tex
PDF=MachineTranslate.pdf
HTML=MachineTranslate.html

INTERMEDIAFILE=MachineTranslate.aux MachineTranslate.log MachineTranslate.out

LaTeX=latex

all:$(PDF)

$(INTERMEDIAFILE) $(PDF):$(SOURCE) 
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(RM) $(INTERMEDIAFILE)
clean:
	$(RM) $(INTERMEDIAFILE) $(PDF)
