#include <stdio.h>
#include <stdlib.h>


// creer un tableau dynamique d'entier taille 5
int main()
{
    int resultat = 1;
    int * monTab = NULL;
    monTab = (malloc(5*sizeof(int)));

    * monTab = 13;
    * (monTab +1) = 14;
    * (monTab +2) = 15;
    monTab[3]= 16;
    * (monTab +4) = 17;



    for(int i = 0 ; i < 5 ; i ++) {
        printf("ressultat : %d \n", *(monTab+i));
        resultat = resultat * (*(monTab+i));
        
        // equivalent a la ligne 22
        resultat = resultat * (monTab[i]);
    }
    printf("%d\n", resultat);

    // liberation de la memoire
    free(monTab);
    system("pause");
    return 0;
}