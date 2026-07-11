#include <stdio.h>

int somme_tableau(int arr[], int n);

int main() {
  int tab[5] = {1, 2, 3, 4, 5};
  int resultat = somme_tableau(tab, 5);
  printf("%d", resultat);

  return 0;
}

int somme_tableau(int arr[], int n) {
  int somme = 0;
  for (int i = 0; i < n; i++) {
    somme += arr[i];
  }
  return somme;
}