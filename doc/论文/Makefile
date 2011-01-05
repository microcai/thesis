SOURCE=EnglishParser
PDF=EnglishParser.pdf
HTML=EnglishParser.html

INTERMEDIAFILE=EnglishParser.aux EnglishParser.log EnglishParser.out \
EnglishParser.bbl \
EnglishParser.blg\
EnglishParser.dvi\
EnglishParser.ps

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
