#include <stdio.h>

int fact(int n)
{
    if (n == 1) {
        return n;
    }
    else {
        return n * fact(n-1); // recursion
    }
}

int main(void)
{
    int a = 0;
    printf("saisissez un nombre pour connaitre son factoriel : ");
    scanf("%d", &a);
    printf("%d\n", fact(a));
    return 0;
    
}



