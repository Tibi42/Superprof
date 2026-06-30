#include <stdio.h>

int carre(int x)
{
    return x*x;
}

int main(void)
{
    printf("saisissez un nombre pour connaitre son carre : ");
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", carre(a));
    return 0;
}