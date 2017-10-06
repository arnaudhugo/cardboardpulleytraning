#ifndef __INVENTAIRE_H__
# define __INVENTAIRE_H__

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

typedef struct s_inventaire
{
  char obj[5];
  struct s_inventaire *next;
} t_inventaire;

#endif
