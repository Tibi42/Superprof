#include <stdio.h>
#include <stdlib.h> // Nécessaire pour les fonctions d'allocation de mémoire (malloc, free)

int main() {

  // Objectifs du programme :
  // 1. Demander à l'utilisateur le nombre de notes.
  // 2. Allouer dynamiquement un tableau de la bonne taille en mémoire.
  // 3. Demander les notes pour remplir le tableau.
  // 4. Afficher le tableau de notes.
  // 5. Calculer et afficher la moyenne.
  // 6. Libérer la mémoire allouée.

  int NbNotes = 0;

  printf("quelle est le nombre de notes ?\n");
  scanf("%d", &NbNotes);

  // Déclaration d'un pointeur de réels (float)
  float *notes = NULL;
  
  // Allocation dynamique de la mémoire :
  // On réserve (NbNotes * la taille d'un float en octets).
  // 'notes' stocke l'adresse du premier élément de cette zone mémoire.
  notes = malloc(NbNotes * sizeof(float));
    
  // Sécurité : si malloc échoue (manque de mémoire), il retourne NULL.
  // Dans ce cas, on arrête le programme immédiatement pour éviter un plantage.
  if (notes == NULL) {
    return 1; 
  }

  // Saisie des notes
  int i = 0;
  do {
    printf("quelle est la note N %d\n", i);
    // Saisie directe de la note à l'adresse (notes + i).
    // Note : (notes + i) est l'écriture en pointeur équivalente à &notes[i].
    scanf("%f", notes + i);
    i++;
  } while (i < NbNotes);

  // Affichage des notes saisies
  for (int i = 0; i < NbNotes; i++) {
    // Affiche le contenu à l'adresse (notes + i).
    // Note : *(notes + i) est l'écriture en pointeur équivalente à notes[i].
    printf("le tableau des notes est : %.2f\n", *(notes + i));
  }

  // Calcul de la somme des notes
  float somme = 0;
  for (int i = 0; i < NbNotes; i++) {
    somme = *(notes + i) + somme; // Ajoute la note courante à la somme accumulée
  }
  
  // Calcul et affichage de la moyenne
  float moyenne = somme / NbNotes;
  printf("Moyenne : %.2f\n", moyenne);

  // Recherche de la note la plus basse
  float min = *(notes); // On initialise le minimum avec la première note
  for (int i = 1; i < NbNotes; i++) {
    if (*(notes + i) < min) {
      min = *(notes + i); // Mise à jour si une note plus basse est trouvée
    }
  }
  printf("Note la plus basse : %.2f\n", min);

  // Libération de la mémoire allouée dynamiquement pour éviter une fuite de mémoire.
  free(notes); 
  
  return 0; // Fin du programme sans erreur
}