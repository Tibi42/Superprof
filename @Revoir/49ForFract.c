#include <stdio.h>

int main() {
  int nb, fact = 1;

  printf("choisissez une factorielle: \n");
  scanf("%d", &nb);

  for (int i = 1; i <= nb; i++) {
    fact *= i;
  }

  printf("%d = %d\n", nb, fact);

  return 0;
}