#include <stdio.h>
#include <stdlib.h>

int main() {

  // --- VERSION STATIQUE ---
  // Un tableau statique a une taille fixe définie à la compilation (ici 20x10).
  // La mémoire est gérée automatiquement sur la pile (stack).
  int tab[20][10];

  // --- VERSION DYNAMIQUE ---
  // Un tableau dynamique permet de choisir sa taille pendant l'exécution du programme.
  // La mémoire est allouée manuellement sur le tas (heap).
  int **tab2d; // Un pointeur de pointeurs d'entiers (représente notre matrice)
  int ligne = 20;
  int colonne = 10;

  // 1. Demander les dimensions à l'utilisateur
  printf("combien de ligne pour le tableau : ");
  // Note : On retire le '\n' dans scanf car cela peut perturber la saisie de l'utilisateur
  scanf("%d", &ligne);
  
  printf("combien de colonne : ");
  scanf("%d", &colonne);

  // 2. Allocation du tableau de pointeurs de lignes (tab2d)
  // tab2d est un tableau de taille 'ligne', où chaque case contiendra l'adresse d'une ligne.
  tab2d = calloc(ligne, sizeof(int *));
  
  // 3. Allocation de chaque ligne individuellement
  for (int i = 0; i < ligne; i++) {
    // Chaque ligne tab2d[i] est un tableau de taille 'colonne' d'entiers
    tab2d[i] = calloc(colonne, sizeof(int));
  }

  // 4. Exemple d'écriture dans une case
  // ATTENTION : Pour écrire dans tab2d[5][2], il faut s'assurer que ligne > 5 et colonne > 2,
  // sinon on écrit en dehors des limites de la mémoire allouée (Segmentation Fault).
  if (ligne > 5 && colonne > 2) {
    tab2d[5][2] = 3;
    printf("Valeur attribuee a tab2d[5][2] = %d\n", tab2d[5][2]);
  } else {
    printf("Matrice trop petite pour ecrire a la case [5][2]\n");
  }

  // 5. Parcours et impression de la matrice
  printf("Affichage du tableau :\n");
  for (int i = 0; i < ligne; i++) {
    for (int j = 0; j < colonne; j++) {
      // tab2d[i][j] accède à la j-ème colonne de la i-ème ligne
      printf("%d ", tab2d[i][j]);
    }
    printf("\n");
  }

  // 6. Désallocation de la mémoire dans l'ordre inverse de la création
  // CORRECTION : Auparavant, la boucle s'arrêtait à 20 (dur). Si l'utilisateur 
  // demandait moins de 20 lignes, cela provoquait un plantage (accès hors limites).
  // Si l'utilisateur en demandait plus, il y avait une fuite de mémoire.
  // On doit donc boucler jusqu'à 'ligne'.
  for (int i = 0; i < ligne; i++) {
    free(tab2d[i]); // Libération de chaque ligne
  }

  free(tab2d); // Libération du tableau de pointeurs de lignes

  return 0;
}