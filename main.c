/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/
#include <stdio.h>
#include <stdlib.h>
/*
préprocesseur.
bibliothéque pour les math
*/
#include <math.h>
/*
Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher Bonjour à l'écran.
*/
int main()
{
    int  resultat, annee ,  annee_naissance ;

    // On deman de les nombres 1 et 2 à l'utilisateur :

    printf("Anne d'aujourd'hui : ");
    scanf_s("%d", &annee);
    printf("Annee de naissance : ");
    scanf_s("%d", &annee_naissance);

    // On fait le calcul :

    resultat = annee  - annee_naissance;

    // Et on affiche l'age :

    if (resultat >= 18) // Si l'âge est supérieur ou égal à 18
    {
        printf("Vous etes majeur !");
    }
    else // Sinon...
    {
        printf("Ah c'est bete, vous etes mineur !");
    }
   
    return 0;
}
