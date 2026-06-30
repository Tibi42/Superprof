#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Saisissez trois nombres pour en faire la moyenne : ");
    scanf("%f %f %f", &a, &b,&c);
    printf("La moyenne de ces trois nombre est : %.2f", (a + b + c)/3);
    
    return 0;
}