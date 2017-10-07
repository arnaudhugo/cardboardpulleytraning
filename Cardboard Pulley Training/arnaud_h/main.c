/*
** main.c for Cardboard Pulley Training in /home/arnaud/Documents/MAJ0147
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Sat Oct  7 09:47:41 2017 ARNAUD Hugo
** Last update Sat Oct  7 10:16:23 2017 ARNAUD Hugo
*/
#include "cardboard.h"

int main(int argc, char *argv[])
{
  t_inventaire	*list;
  t_inventaire	*tmp;

  list = NULL;
  list = new_item(list, 'a');
  list = new_item(list, 'b');
  tmp = list;
  while (!tmp)
    {
      my_putchar(tmp->obj);
      tmp = tmp->next;
    }
  my_putchar('\n');
  return (0);
}
