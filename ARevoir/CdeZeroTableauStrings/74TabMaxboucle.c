#include <stdio.h>

int main() {

  int tab[4] = {9000, 5, 99, 500};
  // On initialise 'max' avec le premier élément du tableau (index 0)
  int max = tab[0];

  // On commence à i = 1 car il est inutile de comparer tab[0] avec lui-même.
  // Attention : la taille du tableau est de 4, donc les indices valides vont de 0 à 3.
  // On doit donc s'arrêter avant 4 (i < 4) pour éviter un débordement de mémoire (out of bounds).
  for (int i = 1; i < 4; i++) {
    if (tab[i] > max) {
      max = tab[i];
    }
  }

  printf("%d\n", max);

  return 0;
}