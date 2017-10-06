#include <stdlib.h>
#include "inventaire.h"

t_inventaire	*new_item(t_inventaire *list, str obj)
{
  t_inventaire	*node;

  node = malloc(sizeof(node));
  if (node == NULL)
    {
      return (0);
    }
  node->obj = obj;
  node->next = list;
  return (node);
}

int		main()
{
  t_inventaire	*list;
  t_inventaire	*tmp;

  list = NULL;
  list = new_item(list, 'ab');
  list = new_item(list, 'b');
  tmp = list;
  while (tmp)
    {
      my_putchar(tmp->obj);
      tmp = tmp->next;
    }
  my_putchar('\n');
  return (0);
}
