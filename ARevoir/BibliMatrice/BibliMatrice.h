#ifndef BIBLI_MATRICE_H
#define BIBLI_MATRICE_H

// Crée une matrice dynamique de dimensions ligne x colonne et initialise toutes les valeurs à 0.
// Retourne un pointeur de pointeurs (int **).
int ** CreerMatrice(int ligne,  int colonne);

// Permet à l'utilisateur de modifier la valeur d'une seule case spécifique (ligne, colonne) dans la matrice.
void RemplirMatrice(int ** matrice, int ligne, int colonne);

// Affiche la matrice sous forme de grille dans la console.
void AfficherMatrice(int **matrice, int ligne, int colonne);

// Remplit entièrement la matrice en demandant à l'utilisateur une valeur pour chaque case.
void RemplirTouteMatrice(int ** matrice, int ligne, int colonne);

// Libère la mémoire allouée dynamiquement pour la matrice (évite les fuites de mémoire).
void FreeMem(int **matrice, int ligne);

// Calcule et retourne la moyenne (float) de tous les éléments de la matrice.
float MoyenneMatrice(int ** martrice, int ligne, int colonne);

// Calcule et retourne la somme de tous les éléments de la matrice.
int AdditionnerMatrice(int **matrice, int ligne, int colonne);

int MinimumMatrice(int **matrice, int ligne, int colonne);

#endif // BIBLI_MATRICE_H