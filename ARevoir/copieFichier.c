
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// copie lettre par lettre
int main()
{
    FILE * fichierA = NULL;
    fichierA = fopen("fichierA.txt", "r+");
    FILE * fichierB = NULL;
    fichierB = fopen("fichierB.txt", "w+");

    if(fichierA == NULL || fichierB == NULL){
        printf("erreur d'ouverture");
        return 1;
    }

    char lettreEnCour = 0;
    while(lettreEnCour != EOF){
    lettreEnCour = fgetc(fichierA);
    // fgetc(fichierA); pour lire
    fputc(lettreEnCour, fichierB);
    }

   fclose(fichierA);
   fclose(fichierB);

    return 0;
}