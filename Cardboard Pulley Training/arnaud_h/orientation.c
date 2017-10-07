/*
** orientation.c for Cardboard Pulley Training in /home/arnaud/Documents/MAJ0147
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Sat Oct  7 09:46:06 2017 ARNAUD Hugo
** Last update Sat Oct  7 10:16:45 2017 ARNAUD Hugo
*/
#include "cardboard.h"

int up_s(t_char *target)
{
  target->azimut;
  my_putstr("Chiken looks north");
  return (0);
}
int down_s(t_char *target)
{
  target->azimut;
  my_putstr("Chiken looks south");
  return (0);
}
int left_s(t_char *target)
{
  target->azimut;
  my_putstr("Chiken looks east");
  return (0);
}
int right_s(t_char *target)
{
  target->azimut;
  my_putstr("Chiken looks west");
  return (0);
}

int look(t_char *target, func_ptr *look_to, t_cardinal_point cardinal_point)
{
  return (0);
}

