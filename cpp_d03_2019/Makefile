##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	libstring.a

SRC	=	./string.c 	\
	./assign.c \
	./append.c \
	./at.c \
	./clear.c \
	./size.c \
	./compare.c \
	./copy.c \
	./c_str.c \
	./empty.c \
	./find.c

OBJ = $(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	: 	$(OBJ)
	  	ar rc $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re