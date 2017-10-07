##
## Makefile for  in /home/arnaud/libmy_01
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Sat Sep 30 09:12:28 2017 ARNAUD Hugo
## Last update Sat Oct  7 11:47:32 2017 ARNAUD Hugo
##
CC	= gcc
NAME	= not_mg_vr.a
SRC	= cardboard.h		\
	  orientation.c		\
	  deplacement.c		\
	  inventaire.c		\
	  action.c		\
	  time_paradox.c	\
	  my_putchar.c		\
	  my_putstr.c		\
	  my_strlen.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

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
