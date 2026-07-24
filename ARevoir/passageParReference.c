#include <stdio.h> // Pour la fonction printf

// Prototypes des fonctions
int doubler1(int param);    // Passage par valeur (copie de la variable)
void doubler2(int *param);  // Passage par "référence" (via pointeur sur la variable originale)

int main() {
  int nombre = 2; // Initialisation du nombre à 2
  printf(" afficher %d\n", nombre); // Affiche 2

  // 1. Utilisation de doubler1 avec réaffectation
  // On récupère le retour de la fonction pour écraser la valeur de 'nombre'
  nombre = doubler1(nombre); 

  // 2. Passage par valeur seul (sans réaffectation)
  // On passe une copie de 'nombre' à doubler1. La variable originale 'nombre' n'est pas modifiée.
  doubler1(nombre); 
  printf(" afficher %d\n", nombre); // Affichera toujours 4 (le double de 2 après l'étape 1)

  // 3. Passage par adresse / référence
  // On utilise l'opérateur '&' pour envoyer l'adresse mémoire de 'nombre'.
  // La fonction doubler2 pourra ainsi modifier directement la variable d'origine.
  doubler2(&nombre); 
  printf("afficher %d\n", nombre); // Affiche 8 (car 4 a été doublé directement en mémoire)

  return 0;
}

// Implémentation de doubler1 (Passage par valeur)
// Le paramètre 'param' est une copie locale de l'argument.
// Toute modification de 'param' n'affecte pas la variable d'origine dans le main.
int doubler1(int param) { 
  return param * 2; 
}

// Implémentation de doubler2 (Passage par adresse / "référence")
// 'param' est un pointeur qui stocke l'adresse mémoire d'une variable.
// L'étoile '*' (opérateur de déréférencement) permet d'accéder et de modifier 
// directement la valeur stockée à cette adresse.
void doubler2(int *param) { 
  (*param) = *param * 2; 
}