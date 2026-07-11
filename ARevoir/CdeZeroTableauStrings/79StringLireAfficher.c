#include <stdio.h>
#include <string.h>

int main(){
    // Déclaration d'un tableau de caractères (chaîne) pouvant contenir jusqu'à 49 caractères + le caractère de fin de chaîne '\0'
    char tab[50];

    printf("entrez une phrase\n");

    // scanf avec "%s" lit une chaîne de caractères mais s'arrête au premier espace, tabulation ou retour à la ligne.
    // tab est déjà une adresse (pointeur vers le premier élément), donc on ne met pas de '&' devant.
    scanf("%s", tab);

    // strlen(tab) renvoie la longueur de la chaîne (nombre de caractères saisis avant le '\0').
    // On utilise %lu (ou %zu) car strlen retourne un type size_t (entier non signé).
    printf("%lu\n", strlen(tab)); 

    return 0;
}


