/*
** wesh_to_fr.c for  in /home/guillaume/ALGO/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 14:28:25 2015 MECHAT Guillaume
** Last update Thu Nov  5 15:13:24 2015 MECHAT Guillaume
*/

#include "my_list.h"

char	*my_find_elm_eq_in_list(t_list *begin, char *d);

void	wesh_to_fr(t_list *list)
{
  char	*data;
  char	*data_find;

  my_putstr("\nMot Wech ?\n\n>");
  data = readLine();
  data_find = my_find_elm_eq_in_list(list, data);
  if (my_strcmp(data_find, "0") != 0)
    {
      my_putstr("Equivalent en Fr : ");
      my_putstr(data_find);
    }
  else
    my_putstr("\n\33[31mAucune concordance dans le Dico\33[00m");
  first_accueil(list);
}
