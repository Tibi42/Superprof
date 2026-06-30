#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int solde;
    int decouvert_autorise;
    int plafond_cb;
}   Banque;


typedef struct 
{
    int age;
    int taille;
    int poids;
    Banque compte;

} Personne;


int main(void)
{
    Personne* jonathan;
    jonathan = malloc(sizeof(Personne));

    jonathan.age = 48;
    jonathan.taille = 189;
    jonathan.poids = 189;

    jonathan.compte.solde  = 1000;

    printf("soled Joanathan: : %d\n", jonathan.compte.solde);
    return 0;
}