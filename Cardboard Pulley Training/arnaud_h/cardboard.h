/*
** cardboard.h for Cardboard Pulley Training in /home/arnaud/Documents/_MAJ0147
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Sat Oct  7 09:57:09 2017 ARNAUD Hugo
** Last update Sat Oct  7 13:19:26 2017 ARNAUD Hugo
*/
#ifndef __CARDBOARD_H__
#define __CARDBOARD_H__

#include <stdlib.h>
#include <unistd.h>

typedef enum e_item
  {
    E_KEY,
    E_DOOR
  } t_action;
typedef enum e_coord
  {
    E_X = 0,
    E_Y = 1
  } e_coord;
typedef enum e_direction
  {
    E_FORWARD,
    E_BACKWARD,
    E_LEFT,
    E_RIGHT
  }t_direction;
typedef enum e_char
  {
    E_PLAYER,
    E_GUARD,
    E_CAMERA,
    E_DOG
  } e_char;
typedef enum e_cardinal_point
  {
    E_NORTH = 0,
    E_EAST = 180,
    E_SOUTH = 90,
    E_WEST = 270
  } t_cardinal_point;
typedef struct s_char
{
  unsigned int		id;
  e_coord		coord[2];
  t_cardinal_point	azimut;
  t_direction		dir;
  e_char		type;
} t_char;
typedef struct s_inventaire
{
  char			obj[5];
  struct s_inventaire	*next;
} t_inventaire;
typedef struct s_item
{
  t_action	action;
  unsigned int	id;
  e_coord	coord[2];
  t_action	type;
} t_item;
typedef int *func_ptr(t_char*);

//------------------------------ Deplacement ---------------------------
int	move(t_char *target, func_ptr *move_to, t_direction dir);
int	up_m(t_char *target);
int	down_m(t_char *target);
int	left_m(t_char *target);
int	right_m(t_char *target);

//------------------------------ Orientation ---------------------------
int	look(t_char *target, func_ptr *look_to, t_cardinal_point cardinal_point);
int	up_s(t_char *target);
int	down_s(t_char *target);
int	left_s(t_char *target);
int	right_s(t_char *target);

//------------------------------ Action --------------------------------
int	perform(t_char *user, func_ptr *to_do, t_action action, t_item *target);
int	lie_down_p(t_char *user, t_item *target);
int	get_up_p(t_char *user, t_item *target);
int	take_p(t_char *user, t_item *target);
int	open_p(t_char *user, t_item *target);

//----------------------------- Autres ---------------------------------
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);

#endif
