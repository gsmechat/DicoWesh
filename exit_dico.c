/*
** exit_dico.c for  in /home/guillaume/ALGO/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 13:44:27 2015 MECHAT Guillaume
** Last update Thu Nov  5 13:50:02 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdlib.h>

int	exit_dico(t_list *list)
{
  free(list);
  return (0);
}
