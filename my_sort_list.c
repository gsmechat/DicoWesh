/*
** my_sort_list.c for  in /home/guillaume/ALGO/DicoWECH
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Fri Nov  6 11:42:18 2015 MECHAT Guillaume
** Last update Fri Nov  6 12:29:43 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdio.h>

t_list		*my_sort_list(t_list *list)
{
  t_list	*first;
  t_list	*pro;

  first = list;
  while (list != NULL)
    {
      pro = list->next;
      if (pro != NULL && my_strcmp(list->word_wech, pro->word_wech) > 0)
	{
	  list->next = pro->next;
	  pro->next = first;
	  list = pro;
	  first = pro;
	}
      else
	list = list->next;
    }
  return (first);
}
