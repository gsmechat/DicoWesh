/*
** wesh_to_fr.c for  in /home/guillaume/ALGO/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 15:21:44 2015 MECHAT Guillaume
** Last update Thu Nov  5 15:24:12 2015 MECHAT Guillaume
*/

#include "my_list.h"

char	*my_find_elm_eq_in_list_two(t_list *begin, char *d);

void	fr_to_wesh(t_list *list)
{
  char	*data;
  char	*data_find;

  my_putstr("\nMot FR ?\n\n>");
  data = readLine();
  data_find = my_find_elm_eq_in_list_two(list, data);
  if (my_strcmp(data_find, "0") != 0)
    {
      my_putstr("Equivalent en WECH : ");
      my_putstr(data_find);
    }
  else
    my_putstr("\n\33[31mAucune concordance dans le Dico\33[00m");
  first_accueil(list);
}
