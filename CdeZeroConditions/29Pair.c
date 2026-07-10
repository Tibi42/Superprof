#include <stdio.h>

int main()
{
    int nb = 0;
    printf("saissiez un entier\n");
    scanf("%d", &nb);

    if (nb % 2 == 0){
        printf(" le nombre est pair\n");
    }else{
        printf("le nombre est impair\n");
    }

    return 0;
}