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
    int choix, n1, n2;

    printf("Choisissez une operation : \n 0 - quitter \n 1 - addition \n 2 - soustraction \n 3 - multiplication \n 4 - division \n ");
    scanf("%d", &choix);
    if (choix >= 0 && choix <= 4)
    {
        printf("Saisir le premier nombre : ");
        scanf("%d", &n1);
        printf("Saisir le deuxieme nombre : ");
        scanf("%d", &n2);
        switch (choix)
        {
        case 1:
            printf("Addition : %d", n1 + n2);
            break;
        case 2:
            printf("Soustraction : %d", n1 - n2);
            break;
        case 3:
            printf("Multiplication : %d", n1 * n2);
            break;
        case 4:
            if (n2 != 0)
            {
                printf("Division : %.2f\n", (float)n1 / n2);
            }
            else
            {
                printf("Erreur : Division par zero !\n");
            }
            break;
        }
    }
    else
    {
        printf("Choix invalide\n");
    }
    return 0;
}   