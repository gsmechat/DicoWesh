/*
** ajout_def.c for  in /home/guillaume/ALGO/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 12:47:06 2015 MECHAT Guillaume
** Last update Fri Nov  6 14:09:33 2015 MECHAT Guillaume
*/

#include "my_list.h"
#include <stdio.h>

t_list		*add_link(t_list *list, char *word_wech, char *word_fr);
int		verif_same_word_in_dico(t_list *list,char *ww, int type_list);
t_list		*my_sort_list(t_list *list);

void		ajout_def(t_list *list)
{
  char		*word_wech;
  char		*word_fr;
  t_list	*tmp;
  int		c;
  int		type_list;

  type_list = 1;
  my_putstr("\nQuel est le mot WECH ?\n");
  my_putstr("\n> ");
  word_wech = readLine();
  my_putstr("\nEt en Francais alors ?\n");
  my_putstr("\n> ");
  word_fr = readLine();
  c = verif_same_word_in_dico(list, word_wech, type_list);
  if (c == 0 && my_strcmp(word_wech, "") != 0 && my_strcmp(word_fr, "") != 0)
    {
      my_putstr("\n\033[32mAjout effectuez avec succés =)\033[00m\n");
      tmp = add_link(list, word_wech, word_fr);
      first_accueil(my_sort_list(tmp));
    }
  else
    {
      my_putstr("\n\033[31mDeja dans le Dico (ou espace Filou)!\033[00m\n");
      first_accueil(my_sort_list(list));
    }
}
