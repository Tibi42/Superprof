#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
        char nom[25];
        int age;
        int niveau_energie;
        int niveau_energie_max;
    } Tamagochi;
   
#define duree_vie 10

void afficherTamagochi(Tamagochi *ptr);

void initialiserTamagochi(Tamagochi *t, const char *nom);
int parler(Tamagochi *t);
int nourrir(Tamagochi *t);
int consommer_Energie(Tamagochi *t);

int main(void)
{
    srand(time(NULL));
    Tamagochi groupe[10];
    int nbTamagochi = 0;
    printf("Combien voulez vous de Tamagochi\n");
    scanf("%d", &nbTamagochi);

    for( int i = 0 ; i < nbTamagochi; i++)
    {
        initialiserTamagochi(&groupe[i], NULL);
        afficherTamagochi(&groupe[i]);
    }
    int round;
    for( round = 0 ; round < duree_vie ; round++)
    {
        printf("----- Cycle %d -----\n", round);
        for( int i = 0 ; i < nbTamagochi; i++){
           printf("%s : ", groupe[i].nom);
           parler(&groupe[i]);
           printf("\n");
        }    
        printf("nourrir quel Tamagochi\n");
        for( int i = 0 ; i < nbTamagochi ; i++)
        {
            printf("%d   %s    ", i, groupe[i].nom );
        }
        printf("\n");
    }

    // Tamagochi* robert;
    // robert = malloc(sizeof(Tamagochi));

    // initialiserTamagochi(robert, NULL);
    
    // afficherTamagochi(robert);
    // // printf("%d", parler(robert));
    // parler(robert);

    // int retour;
    // retour = parler(robert);

    // if(retour == 0 )
    // {
    //     printf("malheureux\n");
    // }
    // else
    // {
    //     printf("heureux\n");
    // }
    
    // nourrir(robert);
    // consommer_Energie(robert);
    // consommer_Energie(robert);
    // nourrir(robert);
    // nourrir(robert);
    // nourrir(robert);


    return 0;

}

void initialiserTamagochi(Tamagochi *t, const char *nom)
{
    printf("Quel est le nom de votre Tamagochi ?\n");
    scanf("%s", t->nom);
    printf("Quel est l'age de votre Tamagochi ?\n");
    scanf("%d", &t->age);

    t->niveau_energie = rand()%3+4;
    t->niveau_energie_max = rand()%5+4;
    // rand()et srand(time(NULL)) pour choisir au hasard
    // printf("%d\n", rand()%4+3);
    // printf("%d\n", rand()%5+4);

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

int nourrir(Tamagochi *t)
{
    int manger = 0;
    if( t->niveau_energie < t->niveau_energie_max){
    t->niveau_energie = t->niveau_energie + rand()%3;
    printf("Miam ! C'est bon\n");
    manger = 1;
    } else {
    printf("Je n'ai pas faim\n");
    manger= 0;
    }
    return manger;
}

int consommer_Energie(Tamagochi *t)
{
    int KO = 0;
    t->niveau_energie = t->niveau_energie - 1;
    if( t->niveau_energie <= 0  ){
        printf("Je suis KO\n");
    KO = 0;
    } else {
    KO = 1;
    }
    return KO;
}

void afficherTamagochi(Tamagochi *ptr)
{
    printf("%s\n", ptr->nom);
    printf("%d\n", ptr->age);
    printf("%d/%d\n", ptr->niveau_energie, ptr->niveau_energie_max);
}