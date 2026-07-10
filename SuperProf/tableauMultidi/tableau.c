#include <stdio.h>

int main(){


    int tab[3][5] = {{1,2,3},{6,7,8},{4,5,9}};
    for(int ligne = 0 ; ligne < 3; ligne++){
        printf("\n");
        for(int colonne = 0; colonne <3; colonne++){
            printf("%d",tab[ligne][colonne]);
        }
    }

}