/*
** main.c for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 09:15:12 2015 MECHAT Guillaume
** Last update Fri Nov  6 12:27:41 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdio.h>

t_list		*add_link(t_list *list, char *word_wech, char *word_fr);
  
int		main()
{
  t_list	*list;
  list = NULL;
  my_putstr("\033[36m---- Bienvenue sur le DicoWesh ! ---- \033[00m\n");
  first_accueil(list);
  return (0);
}
