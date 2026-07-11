#include <stdio.h>
#include <string.h>

int main(){

    // Déclaration de deux tableaux de caractères pour stocker les deux chaînes à comparer
    char s1[50], s2[50];

    printf("entrez 2 chaines : \n");
    // scanf avec "%s %s" lit deux mots séparés par un espace, une tabulation ou une entrée.
    // Les valeurs saisies sont stockées respectivement dans s1 et s2.
    scanf("%s %s", s1, s2);


    // strcmp(s1, s2) compare s1 et s2 caractère par caractère.
    // - Elle renvoie 0 si les deux chaînes sont identiques.
    // - Elle renvoie une valeur négative si s1 est inférieure à s2 dans l'ordre alphabétique (ASCII).
    // - Elle renvoie une valeur positive si s1 est supérieure à s2 dans l'ordre alphabétique (ASCII).
    if(strcmp(s1,s2)==0)
    {
        printf("egale\n");
    } else{
        printf("differentes\n");
    }

    return 0;
}