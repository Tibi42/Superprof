#include <stdio.h>

int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else {
        return b;
    }

    //  return ( a > b) ? a : b; // ternaire

}

int main (void)
{
    printf("Saisissez deux nombres : \n");
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("le nomre le plus grand est : %d\n", max(a,b));
    return 0;

}