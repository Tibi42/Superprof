#include <stdio.h> // Pour la fonction printf

// Prototype de la fonction (déclaration)
// Indique au compilateur l'existence de la fonction, son type de retour et ses paramètres
// arr[] : le tableau d'entiers à sommer
// n     : le nombre d'éléments dans le tableau
int somme_tableau(int arr[], int n);

int main() {
  // Déclaration et initialisation d'un tableau d'entiers de taille 5
  int tab[5] = {1, 2, 3, 4, 5};
  
  // Appel de la fonction somme_tableau en lui passant le tableau et sa taille
  int resultat = somme_tableau(tab, 5);
  
  // Affichage du résultat de la somme
  printf("La somme des elements du tableau est : %d\n", resultat);

  return 0;
}

// Définition de la fonction somme_tableau
int somme_tableau(int arr[], int n) {
  int somme = 0; // Variable accumulatrice initialisée à 0
  
  // Boucle for qui parcourt le tableau de l'indice 0 à n-1
  for (int i = 0; i < n; i++) {
    somme += arr[i]; // Équivaut à : somme = somme + arr[i]
  }
  
  return somme; // Retourne le total calculé
}