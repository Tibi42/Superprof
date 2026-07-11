#include <stdio.h>

int main()
{
    // Déclaration et initialisation d'un tableau d'entiers contenant des nombres positifs et négatifs
    int tab[5] = {-1, 9, 4, 5, -6};
    
    // Initialisation d'un compteur pour dénombrer les valeurs positives rencontrées
    int cpt = 0; 

    // Parcours de chacun des 5 éléments du tableau (indices de 0 à 4)
    for(int i = 0; i < 5 ; i++)
    {
        // Si l'élément courant est strictement supérieur à 0, on incrémente le compteur
        if(tab[i] > 0) {
            cpt++; // compte le nombre de valeurs positives
        }
    }

    // Affichage du nombre total de valeurs positives trouvées
    printf("%d\n", cpt);

    return 0;
}