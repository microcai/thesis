SOURCE=MachineTranslate
PDF=MachineTranslate.pdf
HTML=MachineTranslate.html

INTERMEDIAFILE=MachineTranslate.aux MachineTranslate.log MachineTranslate.out \
MachineTranslate.bbl \
MachineTranslate.blg\
MachineTranslate.dvi\
MachineTranslate.ps

LaTeX=xelatex

all:$(PDF)

$(INTERMEDIAFILE) $(PDF):$(SOURCE).tex 
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(LaTeX) -interaction=nonstopmode $(SOURCE)
	$(RM) $(INTERMEDIAFILE)
clean:
	$(RM) $(INTERMEDIAFILE) $(PDF)
