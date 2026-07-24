#include <stdio.h> // Pour la fonction printf

int main() {
  int n = 7; // Nombre total de lignes du motif à afficher
  
  // Boucle externe (i gère les lignes)
  // i va de 0 à n-1 (soit 7 lignes en tout)
  for (int i = 0; i < n; i++) {
    
    // Boucle interne (j gère l'affichage des étoiles sur la ligne courante)
    // Elle commence à 1 et va jusqu'à 'i' inclus.
    // Cela signifie que le nombre d'étoiles affichées augmente à chaque ligne :
    // - Pour i = 0 : la condition (1 <= 0) est fausse -> 0 étoile affichée.
    // - Pour i = 1 : 1 étoile affichée (j=1).
    // - Pour i = 2 : 2 étoiles affichées (j=1, j=2)... et ainsi de suite.
    for (int j = 1; j <= i; j++) {
      printf("*"); // Affiche une étoile sans retour à la ligne
    }
    
    // Retour à la ligne après avoir dessiné les étoiles de la ligne courante
    printf("\n");
  }
  
  return 0; // Fin du programme
}