#include <stdio.h>

int main()
{
    int nb  = 0;
    printf("saisissez un nombre :\n");
    scanf("%d", &nb);

    if ( nb > 0){
        printf("le nombre %d est superieru a zero", nb);
    } else if ( nb < 0) {
        printf(" le nombre %d est inferieur a zero", nb);
    } else {
        printf("le nombre est egal a zero");
    }


}