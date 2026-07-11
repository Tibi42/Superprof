#include <stdio.h>

int main()
{
    int tab[5] = {1,2,3,4,5};
    int *ptr = tab;

    for(int i = 0 ; i < 5 ; i++){
        printf("%d\n", *(ptr++));
    }
    printf("\n");
    return 0;
}