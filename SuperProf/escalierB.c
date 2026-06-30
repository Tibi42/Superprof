#include <stdio.h>

int main(void)
{
    int hauteur = 7;

    for (int i = 0; i < hauteur; i++)
    {
        // Espaces : (hauteur - 1 - i) espaces
        for (int espace = 0; espace < hauteur - i - 1 ; espace++)
        {
            printf(" ");
        }

        // Étoiles : (i + 1) étoiles
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}