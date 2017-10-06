#include <stdlib.h>
#include "inventaire.h"

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
/*
t_inventaire	*get_item(t_inventaire list, char obj)
{
}

t_inventaire	set_item()
{
}
*/
t_inventaire	del_item(t_inventaire *liste)
{
  t_inventaire	*tmp;

  if (!liste)
    {
      return (0);
    }
  tmp = liste->next
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
