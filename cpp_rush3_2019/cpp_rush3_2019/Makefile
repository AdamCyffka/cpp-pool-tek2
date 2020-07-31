##
## EPITECH PROJECT, 2019
## cpp_rush3_2019
## File description:
## Makefile
##

NAME	= MyGKrellm

CC	= g++

RM	= rm -f

SRCS	=  ./modules/CpuModule.cpp \
	  ./modules/DateModule.cpp \
	  ./modules/MonitorModule.cpp \
	  ./modules/NetworkModule.cpp \
	  ./modules/OsModule.cpp \
	  ./modules/RamModule.cpp \
	  ./modules/UserModule.cpp \
	  ./display/Display.cpp \
	  ./display/sfml/DispModule.cpp \
	  ./display/sfml/DispRam.cpp \
	  ./display/sfml/MySFML.cpp \
	  ./display/sfml/MainSFML.cpp \
	  ./display/ncurses/NcursesMain.cpp \
	  main.cpp

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I ./pp
CPPFLAGS += -Wall -Wextra -g

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) -lncurses $(LDFLAGS) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
