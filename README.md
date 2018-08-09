Aujourd'hui, j'ai eu trop le seume. J'ai voulu brancher une meuf/un gars sur FB. Elle/Il a pas voulu taper la discute après que j'ai laché mes premiers coms.

Pour palier à votre problème de langage, nous vous proposons d'implémenter votre propre dictionnaire franco-wesh. Ce dictionnaire se présentera sous la forme d'une liste chaînée où chaque maillon présentera au moins deux chaînes de caractères :
le mot en wesh
sa traduction dans la vraie langue française (toujours un seul mot)
Vous pourrez (devrez) rajouter ce qu'il faut à chaque maillon, tant que c'est nécessaire et justifié ! 
Le programme devra proposer un menu quand on l'execute (Pensez à utiliser la fonction readLine() que nous vous avons déjà fournie). Il devra se lancer de la manière suivante :
                $>./dicowesh
                Bienvenue sur le DicoWesh !
                a : afficher le dictionnaire sous la forme wesh : fr
                b : afficher le dictionnaire sous la forme fr : wesh
                1 : ajouter une définition
                2 : traduire du wesh au francais
                3 : traduire du francais au wesh
            
Votre programme comportera plusieurs fonctions :
une fonction aff_dico_wesh, qui va afficher chaque "définition" de votre dictionnaire (une par ligne), sous la forme "nom_en_wesh : traduction_en_francais". Attention, un dictionnaire est forcément trié !
une fonction aff_dico_fr, qui va afficher chaque "définition" de votre dictionnaire (une par ligne), sous la forme "traduction_en_francais : nom_en_wesh". Attention, un dictionnaire est forcément trié !
une fonction ajout_def, qui va prendre en argument deux chaîne de caractère : le mot en wesh et le mot en français. Il s'agit tout simplement d'insérer le mot wesh et sa traduction dans le "dictionnaire". Si le mot wesh existe déjà, on remplace l'ancienne traduction par le nouveau.
une fonction wesh_to_fr, qui prend un argument un mot en wesh et qui affichera son synonyme en français
une fonction fr_to_wesh, qui prend un argument un mot en français et qui affichera son synonyme en wesh
La gestion d'erreur est obligatoire et nous vous laissons le choix de personnaliser les messages d'erreur (sans toutefois abuser).

Si, par tout hasard, votre culture du wesh est limitée, vous pourrez trouver de l'inspiration sur ce site : http://www.dictionnairedelazone.fr/. Si toutefois, vous n'en avez pas besoin, il faudra quand même vous inquiéter :)

A priori, si vous avez tout suivi, il y a de beaux algorithmes de tri, de recherche et peut-être de récursivité à implémenter. Nous vous laissons choisir ceux que vous souhaitez, tout en sachant qu'on valorisera les plus pertinents.

Bon courage.

Wesh ! J'assure grave. T'as vu ça ?
