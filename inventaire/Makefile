##
## Makefile for  in /home/arnaud/CPT
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Thu Oct  5 19:43:10 2017 ARNAUD Hugo
## Last update Fri Oct  6 11:04:30 2017 ARNAUD Hugo
##
CC	= gcc
NAME	= test
SRC	= inventaire.c	\
	  inventaire.h
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
CFLAGS	= -W -Wall -ansi -pedantic -L. -I.

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) *.c *.h -o $(NAME)
all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
