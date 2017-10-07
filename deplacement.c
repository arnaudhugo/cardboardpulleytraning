/*
** deplacement.c for Cardboard Pulley Training in /home/arnaud/Documents/MAJ0147
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Sat Oct  7 09:43:17 2017 ARNAUD Hugo
** Last update Sat Oct  7 13:10:31 2017 ARNAUD Hugo
*/
#include "cardboard.h"
//-------------------FONCTIONS COORDINATION*-------------------------
int up_m(t_char *target)
{
  target->coord[E_Y] += 1;;
  my_putstr("Chiken moves to the up.");
  return (0);
}

int down_m(t_char *target)
{
  target->coord[E_Y]-= 1;
  my_putstr("Chiken moves to the down.");
  return (0);
}

int left_m(t_char *target)
{
  target->coord[E_X] -= 1;
  my_putstr("Chiken moves to the left.");
  return (0);
}

int right_m(t_char *target)
{
  target->coord[E_X] += 1;
  my_putstr("Chiken moves to the right.");
  return (0);
}

/*int move(t_char *target, func_ptr *move_to, e_direction dir)
{
}*/
/*
int (*move[3])(t_char) = {up_m,down_m,left_m,right_m};
    if ( t_char = 'E_FORWARD')
    {
        list_funct[0];
        return up_m;
    }
    if (t_char = 'E_BACKWARD')
    {
        list_funct[1];
        return down_m;
    }
    if (t_char = 'E_LEFT')
    {
        list_funct[2];
        return left_m;
    }
    if (t_char = 'E_RIGHT')
    {
        list_funct[3];
        return right_m;
    }
*/
