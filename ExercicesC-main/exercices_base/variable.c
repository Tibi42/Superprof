#include <stdio.h>

int main(void)
{
    int entier = 10;
    float flottant = 3.14;
    char caractere = 'A';
  
    printf("%d\n", entier);
    printf("%.2f\n", flottant);
    printf("%.c\n", caractere);
    
    printf("entier %d, flottant %.2f, char %c\n", entier, flottant, caractere);
    return 0;
}