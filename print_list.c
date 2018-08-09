/*
** print_list.c for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 12:04:22 2015 MECHAT Guillaume
** Last update Thu Nov  5 12:07:12 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdio.h>

void	print_list(t_list *list)
{
  while (list != NULL)
    {
      my_putstr(list->word_wech);
      list = list->next;
    }
}
