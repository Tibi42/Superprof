#include <stdio.h>
#include <stdlib.h>


int main()
{

// creation d'un fichier et w+ (ecriture + lecture) et ouverture ligne 10
FILE * fichierTest = NULL;
fichierTest = fopen("fichierTest.txt", "r+");

// Toujours tester l'ouverture du fichier
if(fichierTest == NULL){
    printf("Erreur d'ouverture");
    return 1;
}

//  ecriture dans le fichier 
// fprintf(fichierTest, "Test ecriture\n sur plusieur lignes.");
for( int i = 0 ; i <+100 ; i++){
    fprintf(fichierTest, "%d\n", i); 
}

fclose(fichierTest);


system("pause");
return 0;
}