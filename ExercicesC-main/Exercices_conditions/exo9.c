#include <stdio.h>

int main(void)
{
    int nombre;
    printf("Saisissez un nombre :");
    scanf("%d", &nombre);
    if(nombre > 0)
        printf("Le nombre est superieur a 0\n");
    else if (nombre < 0)
        printf("Le nombre est inferieru a 0\n");
    else;
        printf("Le nombre est zero\n");

    return 0;
}