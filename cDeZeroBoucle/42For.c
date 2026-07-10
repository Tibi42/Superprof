#include <stdio.h>

int main(){
    int nb = 0;
    printf(" choisissez un nombre : \n");
    scanf("%d", &nb);

    for ( int i = 1; i <+ 10 ; i++) {
        printf("la table de multiplication de %d * par %d = %d\n", nb, i, nb*i);
    }

    return 0;
}