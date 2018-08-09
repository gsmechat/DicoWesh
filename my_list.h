/*
** func_and_list.h for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 09:19:05 2015 MECHAT Guillaume
** Last update Thu Nov  5 15:23:34 2015 MECHAT Guillaume
*/

#ifndef __MY_LIST_H__
#define __MY_LIST_H__

typedef struct	s_list
{
  char		*word_wech;
  char		*word_fr;
  struct s_list	*next;
}		t_list;

char		*readLine();
void		first_accueil(t_list *list);
void		my_putstr(char *c);
void		my_putchar(char c);
int		verif_acceuil(char *str);
int		my_getnbr(char *str);
int		my_strcmp(char *s1, char *s2);
void		choice_menu(char *result, t_list *list);
void		aff_dico_wesh(t_list *list);
void		aff_dico_fr(t_list *list);
void		ajout_def(t_list *list);
int		exit_dico(t_list *list);
void		wesh_to_fr(t_list *list);
void		fr_to_wesh(t_list *list);

#endif
