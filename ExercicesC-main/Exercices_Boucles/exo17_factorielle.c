#include <stdio.h>

int main(void)
{
    int nombre, fact = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    for (int i = 1; i <= nombre; i++)
    {
        fact *= i;
    }

    printf("%d = %d\n", nombre, fact);

    return 0;
}
