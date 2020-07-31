##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	z

SRC	=	./z.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Iinclude

GFLAGS = gcc

COMPIL = -o

all	:	$(NAME)

$(NAME)	: 	$(OBJ)
	  	$(GFLAGS) $(COMPIL) $(NAME) $(OBJ) $(CFLAGS)

clean	:
	  	rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm *~ -f $(NAME)
		rm *# -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re