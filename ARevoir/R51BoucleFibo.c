#include <stdio.h> // Pour les fonctions d'affichage et de saisie (printf, scanf)

int main() {
  // Initialisation des deux premiers termes de la suite de Fibonacci
  // (Le développeur a séparé avec humour le mot "Fibonacci" en deux variables : "fibo" et "nacci")
  int fibo = 0;   // Premier terme (F_0)
  int nacci = 1;  // Deuxième terme (F_1)

  int nb = 0;     // Variable pour stocker le nombre de termes à afficher
  printf("Entrez le nombre de termes : ");
  scanf("%d", &nb);

  // Boucle pour calculer et afficher chaque terme de la suite
  for (int i = 0; i < nb; i++) {
    // 1. Affiche le terme actuel
    printf("%d ", fibo);
    
    // 2. Calcule le terme suivant (Somme des deux termes précédents)
    int next = fibo + nacci;
    
    // 3. Effectue le décalage des valeurs pour l'itération suivante :
    // - L'ancien "nacci" devient le nouveau "fibo"
    // - Le nouveau terme "next" devient le nouveau "nacci"
    fibo = nacci;
    nacci = next;
  }
  printf("\n"); // Retour à la ligne final

  return 0; // Fin du programme sans erreur
}