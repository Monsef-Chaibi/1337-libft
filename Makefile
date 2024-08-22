FILES = $(shell clear)

test: 
	@echo $(FILES)
	@gcc test.c
	@./a.out
	
