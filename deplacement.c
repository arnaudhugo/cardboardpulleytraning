/*
1;3801;0c** deplacement.c for  in /home/arnaud/CPT
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Thu Oct  5 21:56:51 2017 ARNAUD Hugo
** Last update Thu Oct  5 22:25:17 2017 ARNAUD Hugo
*/
#include "not_mg_vr"
#include <unistd.h>

void	my_putchar(char c)
{
  wtrite1(1, &c, 1);
}

typedef struct s_char
{
  unsigned int id;
} t_char;

typedef enum e_char e_char;
enum e_char
{
  E_PLAYER, E_GUARD, E_CAMERA, E_DOG
};

typedef enum e_coord e_coord;
enum e_coord
{
  E_X = 0, E_Y = 1
};

int	up_m(t_char *target)
{
  my_putchar(target);
  my_putchar("moves to the up.");
  return (0);
}

int	down_m(t_char *target)
{
  my_putchar(target);
  my_putchar("moves to the down.");
  return (0);
}

int	left_m(t_char *target)
{
  my_putchar(target);
  my_putchar("moves to the left.");
  return (0);
}

int	right_m(t_char *target)
{
  my_putchar(target);
  my_putchar("moves to the right.");
  return (0);
}
