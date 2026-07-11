#include <stdio.h>
#include <stdlib.h>

int main() {

  // demander une taille
  // creer un tableau
  // demander les notes  pour remplir le tableau
  // calculer la moyenne

  int NbNotes = 0;

  printf("quelle est le nombre de notes ?\n");
  scanf("%d", &NbNotes);

  float *notes = NULL;
  notes =
      malloc(NbNotes *
             sizeof(float)); // notes est la premiere case de la memoire réservée
    
 // si le malloc ne fonctionne pas arreter le programme
 if(notes == NULL){return 1;}

  int i = 0;
  do {
    printf("quelle est la note N %d\n", i);
    scanf("%f", notes + i);
    i++;
  } while (i < NbNotes);

  for (int i = 0; i < NbNotes; i++) {
    printf("le tableau des notes est : %.2f\n", *(notes + i));
  }

  // calculer la moyenne
  float somme = 0;
  for (int i = 0; i < NbNotes; i++) {
    somme = *(notes + i) + somme;
  }
  float moyenne = somme / NbNotes;
  printf("%.2f\n", moyenne);

  free(notes); // libere la memoire reservé popur notes
  return 0;
}