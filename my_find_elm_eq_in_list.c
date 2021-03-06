/*
** my_find_elm_eq_in_list.c for  in /Users/sofiane/Documents/ETNA/C/j10/my_find_elm_eq_in_list
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Oct 29 09:33:10 2015 MECHAT Guillaume
** Last update Thu Nov  5 15:32:58 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdlib.h>

char		*my_find_elm_eq_in_list(t_list *list, void *data_ref)
{
  int		result;

  result = 0;
  while (list != NULL)
    {
      result = my_strcmp(list->word_wech, data_ref);
      if (result == 0)
	return (list->word_fr);
      list = list->next;
    }
  return (0);
}
