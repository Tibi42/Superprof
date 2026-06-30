#include <stdio.h>

int main(void)
{
    int choix, n1, n2;

    printf("choisissez votre operation : \n 0 - quitter\n 1 - addition\n 2 - soustraction\n 3- multiplication\n 4 - division\n ");
    scanf("%d", &choix);

    if(choix >= à && choix <= 4)
    {
    printf("saisir le premier nombre : \n");
    scanf("%d", &n1);
    printf("saisir le deuxieme nombre : ");
    scanf("%d", &n2);   
    }
    switch(choix)
    {
        case 1:
           printf("addition : %d\n", n1 + n2);
           break;
        case 2 :
            printf("sosutraction")
           



    }



    return = 0;
}