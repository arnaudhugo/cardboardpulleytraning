/*
** time_paradox.c for Cardboard Pulley Training in /home/arnaud/CPT/time_paradox
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Sat Oct  7 11:32:24 2017 ARNAUD Hugo
** Last update Sat Oct  7 11:32:26 2017 ARNAUD Hugo
*/
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	end;

  end = 0;
  while (*(str + end) != '\0')
    {
      char str_end;

      str_end = *(str + end);
      write (1, &str_end, 1);
      end = end + 1;
    }
}

int	main()
{
  system("clear");
  my_putstr("# ======================================================================================= #");
  my_putchar('\n');
  my_putstr("#                                                                                         #");
  my_putchar('\n');
  my_putstr("#                                                                                         #");
  my_putchar('\n');
  my_putstr("#                                                                                         #");
  my_putchar('\n');
  my_putstr("#    #####  #####  ## ##  #####        #####  #####  #####  #####  ####    ###   #   #    #");
  my_putchar('\n');
  my_putstr("#      #      #    # # #  #            #   #  #   #  #   #  #   #  #   #  #   #   # #     #");
  my_putchar('\n');
  my_putstr("#      #      #    # # #  ###          ####   #####  ####   #####  #   #  #   #    #      #");
  my_putchar('\n');
  my_putstr("#      #      #    #   #  #            #      #   #  #   #  #   #  #   #  #   #   # #     #");
  my_putchar('\n');
  my_putstr("#      #    #####  #   #  #####        #      #   #  #   #  #   #  ####    ###   #   #    #");
  my_putchar('\n');
  my_putstr("#                                                                                         #");
  my_putchar('\n');
  my_putstr("#                                                                                         #");
  my_putchar('\n');
  my_putstr("#                                                                                         #");
  my_putchar('\n');
  my_putstr("# ======================================================================================= #");
  my_putchar('\n');
  my_putstr("#                                     #                                                   #");
  my_putchar('\n');
  my_putstr("#                                     #             ##### ##### ##### ## ##               #");
  my_putchar('\n');
  my_putstr("#              ########               #               #   #     #   # # # #               #");
  my_putchar('\n');
  my_putstr("#             #        #              #               #   ###   ##### # # #               #");
  my_putchar('\n');
  my_putstr("#             #        #              #               #   #     #   # #   #               #");
  my_putchar('\n');
  my_putstr("#       #      #      #       #       #               #   ##### #   # #   #               #");
  my_putchar('\n');
  my_putstr("#       ##   ##        ##    ##       #                                                   #");
  my_putchar('\n');
  my_putstr("#        # ###           ### #        #                                                   #");
  my_putchar('\n');
  my_putstr("#        ####             ####        #   #####  #  #####  #   #  #   #  #####  #####     #");
  my_putchar('\n');
  my_putstr("#      #     #           #      #     #   #   #     #      #   #  #   #  #   #  #         #");
  my_putchar('\n');
  my_putstr("#      ##   ##  ########  ##   ##     #   ####   #  ###    #   #  #   #  ####   ###       #");
  my_putchar('\n');
  my_putstr("#       # ##  ##        ##  ## #      #   #      #  #      #   #   # #   #   #  #         #");
  my_putchar('\n');
  my_putstr("#        #####           #####        #   #      #  #####  #####    #    #   #  #####     #");
  my_putchar('\n');
  my_putstr("#                                     #                                                   #");
  my_putchar('\n');
  my_putstr("# ======================================================================================= #");
  my_putchar('\n');
  return (0);
}
