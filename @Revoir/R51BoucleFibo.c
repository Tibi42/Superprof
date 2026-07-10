#include <stdio.h>

int main() {
  int fibo = 0;
  int nacci = 1;

  int nb = 0;
  printf("Entrez le nombre de termes : ");
  scanf("%d", &nb);

  for (int i = 0; i < nb; i++) {
    printf("%d ", fibo);
    int next = fibo + nacci;
    fibo = nacci;
    nacci = next;
  }
  printf("\n");

  return 0;
}