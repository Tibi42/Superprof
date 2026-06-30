#include <stdio.h>

int main(void)
{
    char prenom[32];

    printf("Entrez vote prenom : ");
    scanf("%s", prenom);

    printf("Bonjour, %s\n", prenom);
    printf("La longueur de votre prenom est : %lu \n", strlen(prenom));

    return 0;
}