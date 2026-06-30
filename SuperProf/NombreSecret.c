#include <stdio.h>

int main(void)
{
    int secret = 234;
    int nombre;
    printf("entrez un nombre pour trouver le nombre secret :");
    scanf("%d", &nombre);

    if (nombre < secret)
        printf("le nombre secret est plus grand\n");
    else if (nombre > secret)
        printf("le nombre secret est plus petit\n");    
    else
        printf("c'est le nombre secret\n");
    return 0;
}