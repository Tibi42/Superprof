#include <stdio.h>

int main()
{

    float a = 0, b = 0, c = 0;
    
    printf("choisissez trois nobre pour en faire la moyenne : \n");
    scanf(" %f %f %f", &a, &b, &c);

    printf(" la moyene est de : %.2f\n", (a+b+c)/3);

    return 0;
}