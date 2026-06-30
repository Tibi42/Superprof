/*_Le programme possède un mot de passe :

secret123

Tant que l'utilisateur ne le saisit pas correctement :

Mot de passe incorrect */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char motDePasse[20];

    do {
        printf("Entrez le mot de passe : ");
        scanf("%19s", motDePasse);

        if (strcmp(motDePasse, "secret123") != 0) {
            printf("Mot de passe incorrect\n");
        }
    } while (strcmp(motDePasse, "secret123") != 0);

    printf("Mot de passe correct !\n");

    return 0;
}