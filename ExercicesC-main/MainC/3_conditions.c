#include <stdio.h>

int main(void)
{
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 0)
    {
        printf("Le nombre est positif\n");
    }
    else if(nombre < 0 )
    {
        printf("Le nombre est negatif\n");
    }
    else
    {
        printf("Le nombre est 0\n");
    }

    return 0;
}