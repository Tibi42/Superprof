#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
        char nom[25];
        int age;
        int niveau_energie;
        int niveau_energie_max;
    } Tamagochi;
   
#define duree_vie 10;

void initialiserTamagochi(Tamagochi *t, const char *nom);
int parler(Tamagochi *t);

int main(void)
{
    srand(time(NULL));

    Tamagochi* robert;
    robert = malloc(sizeof(Tamagochi));

    initialiserTamagochi(robert, NULL);
    printf("Niveau energie %d\n", robert->niveau_energie);

    // printf("%d", parler(robert));
    parler(robert);

    int retour;
    retour = parler(robert);

    if(retour == 0 )
    {
        printf("malheureux");
    }
    else
    {
        printf("heureux");
    }
    // printf("%d\n", rand()%4+3);
    // printf("%d\n", rand()%5+4);

    return 0;
}

void initialiserTamagochi(Tamagochi *t, const char *nom)
{
    t->nom[0] = 'x';
    t->niveau_energie = rand()%3+4;
    t->niveau_energie_max = rand()%5+4;
// rand()et srand(time(NULL)) pour choisir au hasard
}

int parler(Tamagochi *t)
{
    int moral = 0;
    
    if(t->niveau_energie > 4)
    {
        printf("tout va bien\n");
        moral = 1;
    }
    else
    {
        printf("je suis affamé\n");
        moral = 0;
    }

    return  moral;
}