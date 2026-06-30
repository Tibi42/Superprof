#include <stdio.h>
#include <string.h>

int main(void)
{
    char motDePasse[20];

    do 
    {
        printf("Entrez votre mot de passe : ");
        scanf("%s", motDePasse);

    } while (strcmp(motDePasse, "secret123") != 0);

    
    return 0;
}