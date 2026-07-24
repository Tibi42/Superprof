/*
lit toutes les lignes du fichier ;
calcule la moyenne des notes ;
affiche le nom de l'élève ayant la meilleure note.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *fichier = NULL;
  fichier = fopen("fichier.txt", "r+");

  if (fichier == NULL) {
    printf("erreur d'ouverture");
    return 1;
  }

  // renvoie lit le fichier et renvois le format demandé dans les variables
  char nom[25];
  int note = 0;
  int MoyenneNote = 0;
  int lecture = 0;
  int NbNote = 0;
  int tmp =0;
  char tmpNom[25];
  while (lecture != EOF) {
    // revoir pourquoi ca ne fonctionne pas quand scanf est en premier dans la
    // boucle

    MoyenneNote = MoyenneNote + note;
    lecture = fscanf(fichier, "%s %d", nom, &note);
    NbNote++;

    if( note >= tmp){
        tmp = note;
        strcpy(tmpNom, nom);
    }
    
    /* for( ;; ){}
    if (lecture == EOF) {
      break;
    }*/
    // return 2 == lu 2 variable
    // return 1 == lu 1 variable
    // return EOF == lu end of file
  }
  // Addtionner les notes pour le calcul de la moyenne
  printf("%d\n", MoyenneNote);
  printf("%d\n", tmp);
  printf("%s\n", tmpNom);
  // Calcul moyenne
  printf("%f\n", (float)MoyenneNote / NbNote);
  return 0;
}