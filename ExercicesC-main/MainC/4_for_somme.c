#include <stdio.h>

int main(void)
{
    int somme = 0;
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (int i = 0; i <= nombre; i++)
    {
        somme += i;
        printf("i = %d, somme = %d\n", i , somme);
    }

    printf("La somme de 1 a %d est : %d\n", nombre, somme);

    return 0;
}