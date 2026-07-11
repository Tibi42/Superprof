#include <stdio.h>

// Prototype de la fonction pour informer le compilateur de son existence, ses arguments et son type de retour
int somme_tableau(int arr[], int n );


int main(){
    // Initialisation d'un tableau de 5 entiers
    int tab[5] = {1,2,3,4,5};
    
    // Appel de la fonction en lui passant le tableau 'tab' (son adresse) et sa taille '5'
    int resultat = somme_tableau(tab, 5);
    
    // Affichage de la somme retournée par la fonction
    printf("%d", resultat);

    return 0;
}

// Définition de la fonction somme_tableau
// Elle reçoit en paramètre le tableau 'arr' (qui se comporte comme un pointeur) et sa taille 'n'
int somme_tableau(int arr[], int n ){
    // Déclaration et initialisation d'un accumulateur à 0
    int somme = 0;
    
    // Boucle pour parcourir les n éléments du tableau reçu en paramètre
    for(int i = 0 ; i < n ; i++)
    {
        // Ajout de la valeur à l'index 'i' à la somme cumulée
        somme += arr[i];
    }
    
    // Retour du résultat calculé
    return somme;
}