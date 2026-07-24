#include "BibliMatrice.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Pointeur de pointeurs destiné à stocker l'adresse de notre matrice dynamique 2D
  int **tab2d;
  int ligne = 0;
  int colonne = 0;

  // 1. Saisie des dimensions souhaitées par l'utilisateur
  printf("combien de ligne pour le tableau\n");
  scanf("%d", &ligne);
  printf("combien de colonne\n");
  scanf("%d", &colonne);

  // 2. Allocation dynamique de la matrice de dimensions (ligne x colonne)
  tab2d = CreerMatrice(ligne, colonne);

  // 3. Remplissage complet de la matrice par l'utilisateur
  RemplirTouteMatrice(tab2d, ligne, colonne);

  // 4. Affichage de la matrice nouvellement remplie
  AfficherMatrice(tab2d, ligne, colonne);

  // 5. Modification d'une seule case ciblée
  RemplirMatrice(tab2d, ligne, colonne);

  // 6. Ré-affichage pour constater le changement
  AfficherMatrice(tab2d, ligne, colonne);

  // Mimimun matrice 
  MinimumMatrice(tab2d, ligne, colonne);
  
  // 7. Calcul et affichage de la somme des éléments
  printf("Somme des elements : %d\n", AdditionnerMatrice(tab2d, ligne, colonne));
  
  // 8. Calcul et affichage de la moyenne (en %f pour afficher le nombre réel float)
  printf("Moyenne des elements : %f\n", MoyenneMatrice(tab2d, ligne, colonne));

  // 9. Recherche et affichage de la valeur minimale de la matrice
  printf("Minimum des elements : %d\n", MinimumMatrice(tab2d, ligne, colonne));


  // 10. Libération de la mémoire allouée avant de quitter le programme
  FreeMem(tab2d, ligne);



  return 0;
}
/* 🔑 Concepts clés à retenir pour les matrices dynamiques en C
int **tab2d (Pointeur de pointeurs) : C'est l'adresse d'un tableau contenant des pointeurs. Chaque pointeur dans ce tableau pointera vers le début d'une ligne d'entiers.
calloc vs malloc : calloc prend le nombre d'éléments et la taille de chacun en paramètres. Il a l'avantage d'initialiser toute la mémoire à 0 (très pratique pour les matrices), contrairement à malloc qui laisse des valeurs aléatoires.
Ordre de libération de la mémoire : Il faut impérativement libérer la mémoire dans l'ordre inverse de sa création : d'abord chaque ligne individuelle (tab2d[i]), puis le tableau principal contenant les pointeurs de lignes (tab2d). Si vous libérez tab2d en premier, vous perdez l'accès aux lignes et provoquez une fuite de mémoire. */