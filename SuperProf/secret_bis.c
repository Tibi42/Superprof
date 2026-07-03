#include <stdio.h>
#include <string.h>

int main(void)
{
    char motDePasse[20];

    do {
        printf("Entrez votre mot de passe : \n");
        scanf("%s", motDePasse);

        if (strcmp(motDePasse, "secret123") != 0) {
            printf("Mot de passe incorrect");
        }
    } while (strcmp(motDePasse, "secret123") != 0);

    printf("Mot de passe correct\n");

    return 0;

}