#include <stdio.h>  // Pour les fonctions d'affichage comme printf
#include <stdlib.h> // Pour l'allocation dynamique de mémoire (malloc, free)
#include <string.h> // Pour la manipulation de chaînes de caractères (strcpy)

// Définition d'une structure nommée "Voiture"
typedef struct {
  char marque[20];          // Tableau de caractères pour stocker la marque
  char immatriculation[20]; // Tableau de caractères pour l'immatriculation
  int poids;                // Entier pour stocker le poids de la voiture
} Voiture;

int main() {
  // 1. Déclaration d'un pointeur sur une structure Voiture
  // On l'initialise à NULL pour éviter qu'il ne pointe vers une adresse mémoire
  // aléatoire.
  Voiture *v1 = NULL;
  v1 = malloc(sizeof(Voiture));

  // On vérifie toujours si l'allocation a réussi (si v1 n'est pas NULL)
  if (v1 != NULL) {
    // Initialisation des membres de la structure pointée par v1
    // Comme v1 est un pointeur, on utilise l'opérateur flèche (->) à la place
    // du point. v1->poids est un raccourci équivalent à (*v1).poids
    v1->poids = 1000;
    strcpy(v1->immatriculation, "F14-EU");
    strcpy(v1->marque, "Peugeot");

    // Affichage des informations de la voiture pointée par v1
    printf("%s %s %d\n", v1->marque, v1->immatriculation, v1->poids);

    // Libération de la mémoire allouée dynamiquement
    // C'est indispensable pour éviter les fuites de mémoire (memory leaks).
    free(v1);
    v1 = NULL; // Bonne pratique : remettre le pointeur à NULL après libération
  }
  // 2. Déclaration d'une variable classique (statique/locale) de type Voiture
  Voiture v2;

  // Initialisation des membres de la structure v2
  // En C, on ne peut pas affecter directement une chaîne à un tableau de
  // caractères avec '=' après déclaration. On utilise donc strcpy(destination,
  // source) pour copier la chaîne.
  strcpy(v2.immatriculation, "EU-QQC");
  strcpy(v2.marque, "Volswagen");
  v2.poids = 500; // Affectation directe pour un type simple (entier)

  // Affichage des informations de v2
  // On utilise l'opérateur point (v2.membre) car v2 est une variable classique
  // (pas un pointeur).
  printf("%s %s %d\n", v2.immatriculation, v2.marque, v2.poids);

  // 3. Allocation dynamique de mémoire pour le pointeur v1
  // malloc réserve un espace mémoire de la taille d'une structure Voiture
  // (sizeof(Voiture)) et renvoie l'adresse de cet espace, que l'on stocke dans
  // le pointeur v1.

  return 0;
}