/*
** aff_dico_wech.c for  in /home/guillaume/ALGO/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 12:30:33 2015 MECHAT Guillaume
** Last update Fri Nov  6 14:31:31 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdio.h>

t_list		*my_sort_list(t_list *list);

void		aff_dico_wesh(t_list *list)
{
  t_list	*tmp;

  list = my_sort_list(list);
  tmp = list;
  while (list != NULL)
    {
      my_putstr("\33[0;35m");
      my_putstr(list->word_wech);
      my_putstr("\33[00m : \33[0;32m");
      my_putstr(list->word_fr);
      my_putstr("\33[00m");
      my_putstr ("\n----------\n");
      list = list->next;
    }
  first_accueil(tmp);
}
