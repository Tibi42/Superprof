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
    int nb1, nb2, choix;
    printf("choisir une operation \n    1. Addition \n    2. Soustraction \n    3. Multiplication \n    4. Division \n    0. Quitter ");
    scanf("%d", &choix);
    
    if (choix >= 0 && choix <= 4)
    {
        printf("Saisir le premier nombre : ");
        scanf("%d", &nb1);
        printf("Saisir le deuxieme nombre : ");
        scanf("%d", &nb2);
    }
    
    switch (choix)
    {
        case 0:
            printf("Au revoir\n");
            break;
        case 1:
            printf("Addition : %d", nb1 + nb2);
            break;
        case 2:
            printf("Soustraction : %d\n", nb1 - nb2);
            break;
        case 3:
            printf("Multiplication : %d\n", nb1 * nb2);
            break;
        case 4:
            if (nb2 != 0)
            {
                printf("Division : %.2f\n", (float)nb1 / nb2);
            }
            else
            {
                printf("Erreur : Division par zero !\n");
            }
            break;
        
        default:
            printf("Choix invalide\n");
            break;
            
    }

    return 0;
}