#include <stdio.h>

int carre(int x);

int main() {
  int x = 0;
  printf("seleceiotnner un nobmre a mettre au carre : \n");
  scanf("%d", &x);
  printf("%d", carre(x));

      return 0;
}

int carre(int x) { return x * x; }