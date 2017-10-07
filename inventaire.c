/*
** inventaire.c for Cardboard Pulley Training in /home/arnaud/Documents/MAJ0147
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Sat Oct  7 09:45:04 2017 ARNAUD Hugo
** Last update Sat Oct  7 10:16:01 2017 ARNAUD Hugo
*/
#include "cardboard.h"

t_inventaire	*new_item(t_inventaire *list, char obj)
{
  t_inventaire	*node;

  node = malloc(sizeof(obj));
  if (node == NULL)
    {
      return (0);
    }
  node->obj = obj;
  node->next = list;
  return (node);
}

t_inventaire	*get_item(t_inventaire list, char obj)
{
  t_inventaire	*node;

  if (node == NULL)
    {
      return (0);
    }
  while (list->next != NULL)
    {
      my_putstr(liste->obj);
      liste = liste->next;
    }
  return (liste->obj);
}

t_inventaire set_item()
{

}

t_inventaire del_item(t_inventaire *liste)
{
  
}

int		main()
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
