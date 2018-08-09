/*
** choice_menu.c for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 12:10:13 2015 MECHAT Guillaume
** Last update Thu Nov  5 15:24:52 2015 MECHAT Guillaume
*/

#include "my_list.h"

void	choice_menu(char *str, t_list *list)
{
  if (my_strcmp(str, "a") == 0)
    aff_dico_wesh(list);
  else if (my_strcmp(str, "b") == 0)
    aff_dico_fr(list);
  else if (my_strcmp(str, "1") == 0)
    ajout_def(list);
  else if (my_strcmp(str, "2") == 0)
    wesh_to_fr(list);
  else if (my_strcmp(str, "3") == 0)
    fr_to_wesh(list);
  else if (my_strcmp(str, "1") == 0)
    exit_dico(list);
}
