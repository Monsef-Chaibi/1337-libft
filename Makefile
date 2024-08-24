FILES = $(shell clear)

test: 
	@echo $(FILES)
	@gcc -Wall -Wextra -Werror test.c 
	@./a.out
	
