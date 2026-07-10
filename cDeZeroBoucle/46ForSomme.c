#include <stdio.h>

int main() {
  int n = 0;
  int somme = 0;

  printf("choisisssez un onbre\n");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++) {
    somme += i;
  }

  printf("somme = %d\n", somme);
}