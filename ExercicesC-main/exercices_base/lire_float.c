#include <stdio.h>
 
int main(void) {
    float f;
    printf("Entrez un nombre flottant : ");
    scanf("%f", &f);
    printf("Vous avez saisi : %.2f\n", f);
    return 0;
}