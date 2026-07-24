#include "tri.h"
#include <stdio.h>

int main() {
  int tabl[10] = {14, 13, 17, 15, 6, 7, 3, 66, 34, 50};
  int min;
  int i = 0;
  int j = 0;

  for ( i = 0; i < 10; i++) {
    min = i;
    if (tabl[i] < min) {
      min = tabl[i];
    }
    for (j = i + 1; j < 10; j++) {
      if (tabl[j] < tabl[min]) {
        min = j;
      }
    }
    Permut(i, min, tabl);
  }

  afficher(tabl);

}