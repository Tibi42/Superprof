#include <stdio.h>

int main(){
    // Déclaration et initialisation directe d'un tableau d'entiers contenant 5 éléments
    int tab[5] = {1,2,3,4,5};
  
    // Boucle 'for' pour parcourir le tableau
    // 'i' commence à 0 (l'indice du premier élément) et s'arrête à 4 (i < 5)
    for ( int i = 0 ; i < 5 ; i++){
        // Affiche la valeur située à l'indice 'i' dans le tableau
        printf("%d\n", tab[i]);
    }
    printf("\n");
    return 0;
}
