#include <stdio.h>

int main() {
  int c = -10;

  while (c < 11) {
    printf("%d", c);
    c++;
  }
  while(c>-11)
  { 
    printf("%d",c);
    c--;
  }

  return 0;
}