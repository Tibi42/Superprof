#include <stdio.h>
 
int main(void)
{
    int nombre;

    printf("Saisissez un nombre pour savoir s'il est pair ou impair");
    scanf("%d", &nombre);

    if( nombre % 2 == 0)
    {
        printf("le nombe est pair\n");
    }
    else
    {
        printf("Le nombre est impair\n");
    }

    return 0;
}