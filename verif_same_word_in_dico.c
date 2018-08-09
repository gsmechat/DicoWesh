/*
** verif_same_word_in_dico.c for  in /home/guillaume/ALGO/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 15:41:58 2015 MECHAT Guillaume
** Last update Thu Nov  5 21:17:07 2015 MECHAT Guillaume
*/

#include "my_list.h"

char	*my_find_elm_eq_in_list(t_list *list, void *data_ref);
char	*my_find_elm_eq_in_list_two(t_list *list, void *data_ref);

int	verif_same_word_in_dico(t_list *list, char *word_wech, int type_list)
{
  if (type_list == 1)
    {
      if (my_find_elm_eq_in_list(list, word_wech) != 0)
	return (1);
      else
	return (0);
    }
  else if (type_list == 2)
    {
      if (my_find_elm_eq_in_list_two(list, word_wech) != 0)
	return (1);
      else
	return (0);
    }
  return (0);
}
