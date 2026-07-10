#include <stdio.h>

int max(int a, int b);

int main() {
  int a = 0;
  int b = 0;
  printf("choisissez 2 nopmbres pour savoir le quel est le plus grand\n");
  scanf("%d %d", &a, &b);
  printf("le plus grand entre : %d et %d est %d", a, b, max(a, b));

  return 0;
}

int max(int a, int b) { return (a > b) ? a : b; }
