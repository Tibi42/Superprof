#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int main(void)
{
    int somme = addition(1, 3);
    printf("La somme de %d et %d est %d\n", 1, 3, somme);
    return 0;
}