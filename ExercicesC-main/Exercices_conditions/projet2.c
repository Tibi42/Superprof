#include <stdio.h>

int main(void)
{
    int annee;

    printf("Saisissez une annee\n");
    scanf("%d", &annee);
    
    if ( annee < 45)
    {
        printf("L'annee doit etre > a 45");
    }
    else if ((annee % 4 == 0 && annee % 100 !=0) || (annee % 400 == 0))
    {
        printf("L'annee est bissextile");
    }
    else {
        printf("L'annee n'est pas bissextile");
    }

    return 0;
}