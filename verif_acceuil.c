/*
** verif_acceuil.c for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 10:22:25 2015 MECHAT Guillaume
** Last update Thu Nov  5 13:42:29 2015 MECHAT Guillaume
*/

#include "my_list.h"

int	verif_acceuil(char *str)
{
  if (my_strcmp(str, "a") == 0)
    return (1);
  else if (my_strcmp(str, "b") == 0)
    return (2);
  else if (my_strcmp(str, "1") == 0)
    return (3);
  else if (my_strcmp(str, "2") == 0)
    return (4);
  else if (my_strcmp(str, "3") == 0)
    return (5);
  else if (my_strcmp(str, "quit") == 0)
    return (6);
  else
    return (0);
}
