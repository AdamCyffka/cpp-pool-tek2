##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME = my_cat

SRC	= my_cat.cpp

OBJ	= $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -W

$(NAME):$(OBJ)
	g++ $(OBJ) -o $(NAME)
	@echo "$(NAME) compiled successfully"

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re