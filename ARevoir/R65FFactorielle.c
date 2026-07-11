#include <stdio.h>

int fact(int n);

int main() {
  int n = 0;
  printf("choisissez 1 nombre pour connaitre sont factorielle\n");
  scanf("%d", &n);

  printf("le factorielle de %d est %d", n, fact(n));

  return 0;
}

int fact(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * fact(n - 1);
}
