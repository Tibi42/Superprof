#include <stdio.h>

int main(void)
{
    int nombre= 0;
    int somme = 0;

    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    for (int i = 0; i <=nombre; i++)
    {
       somme +=i;
       printf("somme = %d\n", somme);
    }

    

    return 0;
}