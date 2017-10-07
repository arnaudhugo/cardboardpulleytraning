##
## Makefile for  in /home/arnaud/libmy_01
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Sat Sep 30 09:12:28 2017 ARNAUD Hugo
## Last update Tue Oct  3 08:56:14 2017 ARNAUD Hugo
##
CC	= gcc
NAME = not_mg_vr.a
SRC	= orientation.c \
          deplacement.c \
          inventaire.c \
          my_putchar.c \
          my_putstr.c \
          my_strlen.c \
          action.c \
          cardboard.h

OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

$(NAME):	$(OBJ)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)
all:		$(NAME)

clean:		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
