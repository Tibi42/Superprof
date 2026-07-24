#include <stdio.h> // Pour les fonctions d'entrée/sortie (printf, scanf)

int main() {
  int nb = 0;           // Variable stockant la limite saisie par l'utilisateur
  int SommePairs = 0;   // Variable accumulatrice pour la somme des nombres pairs
  int SommeImpairs = 0; // Variable accumulatrice pour la somme des nombres impairs

  // Demande à l'utilisateur de saisir un nombre entier
  printf("saisssiez un entier : \n");
  scanf("%d", &nb);     // Récupère la valeur saisie par l'utilisateur

  // Boucle de 0 jusqu'à nb - 1 (exclu)
  for (int i = 0; i < nb; i++) {
    // L'opérateur modulo (%) renvoie le reste de la division entière de i par 2.
    // Si le reste est égal à 0, alors le nombre i est pair.
    if (i % 2 == 0) {
      SommePairs += i;   // Ajoute i à la somme des nombres pairs
    } else {
      SommeImpairs += i; // Sinon, le nombre i est impair, on l'ajoute à la somme des impairs
    }
  }

  // Affichage des deux sommes calculées
  printf("somme pairs = %d\n", SommePairs);
  printf("somme impairs = %d\n", SommeImpairs);

  return 0; // Fin du programme sans erreur
}