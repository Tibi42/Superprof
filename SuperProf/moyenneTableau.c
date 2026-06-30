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

#include <stdio.h>

int main(void)
{

    int somme = 0;
    int tableNote[10] = {3,10,18,12,15,5,7,19,20,9};

    for (int i = 0; i < 10; i++)
    {
        somme = somme + tableNote[i]; 
    }

    float moyenne = (float)somme / 10.0;
    printf("Somme : %d\n", somme);
    printf("Moyenne : %.2f\n", moyenne);

    return 0;
}


