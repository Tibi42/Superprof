#include <stdio.h>

int main()
{

    int a = 0;
    int b = 0;
    printf("choisissez 2 nombre a additionner\n");

    scanf(" %d %d", &a, &b);

    printf("le resultat est %d", a + b);

    return 0;
}