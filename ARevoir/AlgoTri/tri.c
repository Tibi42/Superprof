#include <stdio.h>
#include "tri.h"
/*
Méthode de tri par recherches successives de minimum (ou par sélec-
tion)
Le principe de cette méthode très intuitive consiste à :
– chercher le minimum dans un sous-tableau (au départ le tableau complet contenant les N
valeurs non ordonnées)
– permuter ce minimum avec le premier élément du sous-tableau
– puis itérer ce traitement sur un nouveau sous-tableau de N-1 éléments (on ne tient plus compte
du premier élément qui est maintenant à sa place)
1. Ecrire la fonction Permut(A,B) qui permute les valeurs réelles contenues dans A et B.
2. En s’inspirant de la fonction MinTab(N,Tab) écrite dans le TD précédent, écrire maintenant la fonction
RangMinTab(N,P,Tab) qui retourne cette fois le rang (et non la valeur) de la plus petite des valeurs
réelles contenues dans le tableau Tab à partir du rang P.
3. Ecrire la fonction TriSel(N,Tab) qui permet de trier par ordre croissant, suivant la méthode énoncée,
les N valeurs réelles contenues dans le tableau Tab.
4. Eléments de complexité algorithmique : évaluer le nombre d’opérations réalisées par cette fonction (en
fonction de N).
*/


// fonction permutation dns un tableau entre cellule A et cellule B
void Permut(int A, int B, int * tabl){
    int tmp = 0;
    tmp = tabl[A];
    tabl[A] = tabl[B];
    tabl[B] = tmp;
}

void afficher(int tabl[]){
    
    for (int i  = 0; i <= 9; i++){
        printf("%d : \n", tabl[i]);
    }
    
}

