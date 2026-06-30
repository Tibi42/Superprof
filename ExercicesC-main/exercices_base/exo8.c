#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;

    x += 3;
    y *= 2;

    x /= 2;

    printf("la valeur de x et de y sont pour x : %d et pour y %d\n", x, y);

    return 0;
}