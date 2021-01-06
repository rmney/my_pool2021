NAME = "ft_cat"
SRCS = srcs/ft_putstr.c srcs/ft_errors.c srcs/ft_print_content.c
MAIN = main.c
HEADER = includes/ft.h

all: 
	gcc -c -Wall -Wextra -Werror $(SRCS) $(MAIN)
	gcc -o $(NAME) *.o

clean : 
	/bin/rm -f *.o
fclean :clean
	/bin/rm -f $(NAME)
