##
## Makefile for  in /home/arnaud/libmy_01
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Sat Sep 30 09:12:28 2017 ARNAUD Hugo
## Last update Thu Oct  5 19:42:26 2017 ARNAUD Hugo
##
CC	= gcc
NAME	= libmy.a
SRC	= NAME.c		\
	  NAME.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
CFLAGS	= -W -Wall -ansi -pedantic -L. -I.

$(NAME):	$(OBJ)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)
all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
