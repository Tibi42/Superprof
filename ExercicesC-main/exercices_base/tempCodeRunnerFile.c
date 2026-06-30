#include <stdio.h>
 
int main(void) {
    float f = 0;
    printf("Saisissez un nombre float : %f\n");
    scanf("%f", &f);
    printf("Vous avez saisi %.2f\n", f);
    return 0;
}