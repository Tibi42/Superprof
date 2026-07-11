#include <stdio.h>

int main(){
    // Initialisation du nombre d'éléments à 0
    int n = 0;
    printf("entrez le nombre d'elements : ");
    // Lecture de la taille du tableau souhaitée par l'utilisateur
    scanf("%d", &n);

    // Déclaration d'un tableau à taille variable (VLA) de taille 'n'.
    // Cela doit impérativement être fait après avoir lu la valeur de 'n'.
    int tab[n];
    for(int i = 0 ; i < n ; i++ ){
        printf("entrez l'element : ");
        // Lecture de chaque entier saisi. On utilise '&tab[i]' pour envoyer l'adresse mémoire de la case.
        scanf("%d", &tab[i]);
    }

    printf("tableau : \n");
    // Boucle d'affichage de tous les éléments saisis dans le tableau
    for (int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n");

    return 0;
}