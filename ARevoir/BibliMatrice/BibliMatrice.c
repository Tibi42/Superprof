#include "BibliMatrice.h"
#include <stdio.h>
#include <stdlib.h>

// Fonction pour créer (allouer dynamiquement) une matrice de taille (ligne x
// colonne)
int **CreerMatrice(int ligne, int colonne) {
  int **tab2d;

  // 1. On alloue le tableau de pointeurs de lignes.
  // Chaque case de tab2d contiendra l'adresse d'une ligne (qui est elle-même un
  // tableau d'entiers). sizeof(int *) correspond à la taille d'un pointeur en C
  // (généralement 4 ou 8 octets selon l'architecture). calloc initialise
  // automatiquement toute la mémoire allouée à 0.
  tab2d = calloc(ligne, sizeof(int *));

  // 2. Pour chaque ligne, on alloue un tableau d'entiers de taille 'colonne'
  for (int i = 0; i < ligne; i++) {
    // tab2d[i] est maintenant un pointeur vers un tableau de 'colonne' entiers.
    // E.g. tab2d[i] pointera vers la première case de la i-ème ligne.
    tab2d[i] = calloc(colonne, sizeof(int));
  }

  // On retourne le pointeur de pointeurs représentant notre matrice dynamique
  return tab2d;
}

// Fonction pour afficher la matrice à l'écran
void AfficherMatrice(int **matrice, int ligne, int colonne) {
  printf("votre matrice :\n");
  // La boucle externe parcourt les lignes (indice i)
  for (int i = 0; i < ligne; i++) {
    // La boucle interne parcourt les colonnes (indice j)
    for (int j = 0; j < colonne; j++) {
      // On affiche l'élément courant suivi d'un espace pour la lisibilité
      printf("%d ", matrice[i][j]);
    }
    // Une fois qu'une ligne est entièrement affichée, on revient à la ligne
    // suivante
    printf("\n");
  }
}

// Fonction pour modifier une case unique de la matrice demandée par
// l'utilisateur
void RemplirMatrice(int **matrice, int ligne, int colonne) {
  int ligneCh = 0;
  int colonneCh = 0;
  int nombre = 0;

  // Demande l'indice de la ligne à modifier (attention : en C, les indices
  // commencent à 0 !)
  printf("choisissez votre ligne a remplir (indice de 0 a %d)\n", ligne - 1);
  scanf("%d", &ligneCh);

  // Demande l'indice de la colonne à modifier (indices de 0 à colonne-1)
  printf("choisissez votre colonne a remplir (indice de 0 a %d)\n",
         colonne - 1);
  scanf("%d", &colonneCh);

  // Demande la nouvelle valeur
  printf("choisissez un nombre pour remplir cette destination\n");
  scanf("%d", &nombre);

  // Affectation de la valeur à la case spécifiée
  matrice[ligneCh][colonneCh] = nombre;
}

// Fonction pour remplir toutes les cases de la matrice une par une
void RemplirTouteMatrice(int **matrice, int ligne, int colonne) {
  // On parcourt chaque ligne et chaque colonne
  for (int i = 0; i < ligne; i++) {
    for (int j = 0; j < colonne; j++) {
      // On demande une saisie à l’utilisateur pour la case à la ligne i et
      // colonne j
      printf("Entrez votre nombre dans le tableau [%d][%d]\n", i, j);
      scanf("%d", &matrice[i][j]);
    }
  }
}

// Fonction pour libérer la mémoire occupée par la matrice
void FreeMem(int **matrice, int ligne) {
  // IMPORTANT : On doit toujours libérer la mémoire dans le sens inverse de son
  // allocation ! Si on libérait "matrice" (le pointeur principal) en premier,
  // on perdrait les adresses des lignes (matrice[i]), et on ne pourrait plus
  // libérer leur mémoire, créant une fuite.

  // 1. Libérer chaque ligne individuellement
  for (int i = 0; i < ligne; i++) {
    free(matrice[i]);
  }

  // 2. Libérer le tableau de pointeurs de lignes
  free(matrice);
}

// Fonction pour additionner (sommer) toutes les cases de la matrice
int AdditionnerMatrice(int **matrice, int ligne, int colonne) {
  int resultat = 0;

  // Double boucle pour passer sur chaque cellule de la grille
  for (int i = 0; i < ligne; i++) {
    for (int j = 0; j < colonne; j++) {
      // On cumule la valeur de la cellule courante dans 'resultat'
      resultat = resultat + matrice[i][j];
    }
  }

  return resultat;
}

// Fonction pour calculer la moyenne arithmétique de la matrice
float MoyenneMatrice(int **matrice, int ligne, int colonne) {
  float resultat = 0;

  // On récupère la somme totale grâce à AdditionnerMatrice.
  // On effectue un cast (float) sur la somme pour s'assurer que la division
  // soit une division à virgule flottante (réelle) et non une division entière
  // en C. Exemple sans cast : 5 / 2 = 2 ; avec cast : (float)5 / 2 = 2.5.
  resultat =
      (float)AdditionnerMatrice(matrice, ligne, colonne) / (ligne * colonne);

  return resultat;
}

// Fonction pour trouver la valeur la plus faible dans la matrice
int MinimumMatrice(int **matrice, int ligne, int colonne) {
  if (ligne <= 0 || colonne <= 0) {
    return 0;
  }
  int min = matrice[0][0];
  for (int i = 0; i < ligne; i++) {
    for (int j = 0; j < colonne; j++) {
      if (matrice[i][j] < min) {
        min = matrice[i][j];
      }
    }
  }
  return min;
}

/* 🔑 Concepts clés à retenir pour les matrices dynamiques en C
int **tab2d (Pointeur de pointeurs) : C'est l'adresse d'un tableau contenant des
pointeurs. Chaque pointeur dans ce tableau pointera vers le début d'une ligne
d'entiers. calloc vs malloc : calloc prend le nombre d'éléments et la taille de
chacun en paramètres. Il a l'avantage d'initialiser toute la mémoire à 0 (très
pratique pour les matrices), contrairement à malloc qui laisse des valeurs
aléatoires. Ordre de libération de la mémoire : Il faut impérativement libérer
la mémoire dans l'ordre inverse de sa création : d'abord chaque ligne
individuelle (tab2d[i]), puis le tableau principal contenant les pointeurs de
lignes (tab2d). Si vous libérez tab2d en premier, vous perdez l'accès aux lignes
et provoquez une fuite de mémoire. */