#include <stdio.h>

int main(void)
{
    int nombre, a = 0,  b = 1;

    printf("Entrez le nombre de termes de la suite de Fibonacci que vous voulez afficher : ");
    scanf("%d", &nombre);

    for (int i = 0; i < nombre; i++)
    {
        printf("%d\n", a);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}