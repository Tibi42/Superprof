#include <stdio.h>

void increment(int *x);

int main()
{
    int a = 5;
    increment(&a);
    printf("%d\n", a);
    return 0;
}

void increment(int *x){
    *x += 1;
}