##
## Makefile for  in /home/arnaud/CPT
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Thu Oct  5 19:43:10 2017 ARNAUD Hugo
## Last update Thu Oct  5 19:43:12 2017 ARNAUD Hugo
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
