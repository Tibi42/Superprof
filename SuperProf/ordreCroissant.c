// 1.Calculer la moyenne d'un tableau de 10 notes
// 2.Classer un tableau d'entier dans l'ordre croissant et décroissant

// 3.Calculatrice simple

// Menu :

// 1. Addition
// 2. Soustraction
// 3. Multiplication
// 4. Division
// 0. Quitter

// L'utilisateur choisit une opération puis saisit deux nombres.

#include<stdio.h>

int main(void)
{
    int tableauCroissant[6]= {5, 7, 4, 8, 9, 18};
    int ordreCroissant[6];
    int temp = 0;

    for( int i = 0 ; i < 6 ; i++)
    {
        for ( int j = i + 1 ; j < 6 ; j++)
        {
            if (tableauCroissant[i] > tableauCroissant[j])
            {
                temp = tableauCroissant[i];
                tableauCroissant[i] = tableauCroissant[j];
                tableauCroissant[j] = temp;
            }
        }
        ordreCroissant[i] = tableauCroissant[i];
        printf("%d ,", ordreCroissant[i]);
    }

    return 0;
}