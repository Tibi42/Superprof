#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", nombre, i, nombre * i);
    }
    
    return 0;
}