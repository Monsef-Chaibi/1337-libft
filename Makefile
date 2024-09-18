all: app

app: 
	@clear
	@gcc -Wall -Wextra -Werror test.c 
	@./a.out

test:
	@clear
	@gcc test.c
	@./a.out
