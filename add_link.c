/*
** add_link.c for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 11:43:01 2015 MECHAT Guillaume
** Last update Fri Nov  6 11:53:50 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdlib.h>

t_list		*add_link(t_list *list, char *word_wech, char *word_fr)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp == NULL)
    return (0);
  if (tmp)
    {
      tmp->word_wech = word_wech;
      tmp->word_fr = word_fr;
      tmp->next = list;
    }
  return (tmp);
}
