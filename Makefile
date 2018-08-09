##
## Makefile for  in /home/guillaume/ALGO/DicoWECH
## 
## Made by MECHAT Guillaume
## Login   <mechat_g@etna-alternance.net>
## 
## Started on  Fri Nov  6 12:37:55 2015 MECHAT Guillaume
## Last update Fri Nov  6 12:40:13 2015 MECHAT Guillaume
##

CC	=	gcc
NAME	=	dicowesh
SRC	=	add_link.c			\
		aff_dico_fr.c			\
		aff_dico_wech.c			\
		ajout_def.c			\
		choice_menu.c			\
		exit_dico.c			\
		first_accueil.c			\
		fr_to_wesh.c			\
		main.c				\
		my_find_elm_eq_in_list.c	\
		my_find_elm_eq_in_list_two.c	\
		my_getnbr.c			\
		my_list.h			\
		my_putchar.c			\
		my_putstr.c			\
		my_strcmp.c			\
		print_list.c			\
		readLine.c			\
		verif_acceuil.c			\
		verif_same_word_in_dico.c	\
		wesh_to_fr.c			\
		my_sort_list.c


FLAGS	=	-W -Wall -Werror
RM	=	rm -f

all:		
		$(CC) $(SRC) -o $(NAME) $(FLAGS)

clean:
		$(RM) *.o

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
