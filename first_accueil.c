/*
** first_accueil.c for  in /home/guillaume/DicoWech
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Nov  5 10:11:47 2015 MECHAT Guillaume
** Last update Fri Nov  6 13:22:05 2015 MECHAT Guillaume
*/

#include "my_list.h"

void	first_accueil(t_list *list)
{
  char	*result;

  my_putstr("\n\n\33[31ma\33[00m : afficher le dictionnaire");
  my_putstr(" sous la forme wesh : fr\n");
  my_putstr("\33[31mb\33[00m : afficher le dictionnaire sous");
  my_putstr(" la forme fr : wesh\n");
  my_putstr("\33[31m1\33[00m : ajouter une définition\n");
  my_putstr("\33[31m2\33[00m : traduire du wesh au francais\n");
  my_putstr("\33[31m3\33[00m : traduire du francais au wesh\n");
  my_putstr("\33[31mquit\33[00m: Pour quitter\n\n");
  my_putstr("\n> ");
  result = readLine();
  while (verif_acceuil(result) == 0)
    {
      my_putstr("\n\33[41mSYNTAX ERROR: [a,b,1,2,3,quit]\33[00m\n");
      my_putstr("\n> ");
      result = readLine();
    }
  choice_menu(result, list);
}
