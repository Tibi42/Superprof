#include <stdio.h>
#include <string.h>

int main(void)
{
    char personne[10];

    printf("Qui etes vous ? ");
    fgets(personne, 10, stdin);
    printf("Heureux de vous rencontrer, %s.\n", personne);
    return 0;
}