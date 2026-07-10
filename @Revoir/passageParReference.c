#include "passageParReference.h"

int main() {

  int nombre = 2;
  printf(" afficher %d\n", nombre);
  nombre = doubler1(nombre);

  doubler1(nombre); // passage par valeur
  printf(" afficher %d\n", nombre);

  doubler2(&nombre); // passage par reference
  printf("afficher %d\n", nombre);

  return 0;
}

int doubler1(int param) { return param * 2; }

void doubler2(int *param) { (*param) = *param * 2; }