#include <stdio.h>

int main() {
  int nb = 0;

  int SommePairs = 0;
  int SommeImpairs = 0;

  printf("saisssiez un entier : \n");
  scanf("%d", &nb);

  for (int i = 0; i < nb; i++) {
    if (i % 2 == 0) {
      SommePairs += i;
    } else
      SommeImpairs += i;
  }

  printf("somme pairs = %d", SommePairs);
  printf("somme impairs = %d", SommeImpairs);

  return 0;
}