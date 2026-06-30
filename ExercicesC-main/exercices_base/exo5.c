#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Saisissez deux variables :a et b");
    scanf("%d %d", &a, &b);

    printf("La somme est de : %d\n", a + b);

    return 0;
}