#include <stdio.h>

int main() {
  int tab[3][5];
  int val = 1;

  for (int ligne = 0; ligne < 3; ligne++) {
    for (int colonne = 0; colonne < 3; colonne++) {
      tab[ligne][colonne] = val;
      val++;
    }
  }
  for (int ligne = 0; ligne <3 ; ligne++){
    printf("\n");
    for (int colonne = 0; colonne < 3; colonne++) {
      printf("%d", tab[ligne][colonne]);
    }
  }
}