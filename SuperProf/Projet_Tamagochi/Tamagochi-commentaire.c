#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char nom[25];
    int age;
    int niveau_energie;
    int niveau_energie_max;
    int mort;
} Tamagochi;

#define duree_vie 10

void affichherTamagochi(Tamagochi *ptr);
void initialiserTamagochi(Tamagochi *t, const char *nom);
int parler(Tamagochi *t);
int nourrir(Tamagochi *t);
int consommer_Energie(Tamagochi *t);
void veillir(Tamagochi groupe[10], int nbTamagochi);
int jouerTour(Tamagochi groupe[10], int nbTamagochi, int round);

int main(void)
{
    srand(time(NULL));
    int continuer = 0;
    Tamagochi groupe[10];
    int nbTamagochi = 0;
    int tour = 1;
    printf("Combien voulez vous de Tamagochi\n");
    scanf("%d", &nbTamagochi);

    for (int i = 0; i < nbTamagochi; i++)
    {
        initialiserTamagochi(&groupe[i], NULL);
        afficherTamagochi(&groupe[i]);
    }
    do
    {
        continuer = jouerTour(groupe, 1, tour);
        tour++;
    } while (continuer == 1);

    return 0;
}
/**
 * Initialise un Tamagochi.
 *
 * Demande à l'utilisateur le nom et l'âge du Tamagochi.
 * Initialise ensuite son état de vie et lui attribue une énergie
 * maximale et une énergie de départ aléatoires.
 *
 * Paramètres :
 *   t   : pointeur vers le Tamagochi à initialiser.
 *   nom : non utilisé dans cette version.
 *
 * Valeur de retour :
 *   aucune (void).
 */
void initialiserTamagochi(Tamagochi *t, const char *nom)
{
    printf("Quel est le nom de votre Tamagochi ?\n");
    scanf("%s", t->nom);
    printf("Quel est l'age de votre Tamagochi ?\n");
    scanf("%d", &t->age);
    t->mort = 0;
    t->niveau_energie_max = rand() % 5 + 4;
    t->niveau_energie = rand() % 3 + 4;
    if (t->niveau_energie_max < t->niveau_energie)
    {
        t->niveau_energie = t->niveau_energie_max;
    }
    // rand()et srand(time(NULL)) pour choisir au hasard
    // printf("%d\n", rand()%4+3);
    // printf("%d\n", rand()%5+4);
}
/**
 * Fait parler le Tamagochi.
 *
 * Le message affiché dépend de son niveau d'énergie.
 *
 * Paramètre :
 *   t : pointeur vers le Tamagochi.
 *
 * Valeur de retour :
 *   1 si le Tamagochi est en bonne forme.
 *   0 s'il a faim.
 */
int parler(Tamagochi *t)
{
    int moral = 0;

    if (t->niveau_energie > 4)
    {
        printf("tout va bien\n");
        moral = 1;
    }
    else
    {
        printf("je suis affamé\n");
        moral = 0;
    }

    return moral;
}
/**
 * Nourrit un Tamagochi.
 *
 * Si son énergie est inférieure à son énergie maximale,
 * il récupère une quantité d'énergie aléatoire.
 *
 * Paramètre :
 *   t : pointeur vers le Tamagochi.
 *
 * Valeur de retour :
 *   1 si le Tamagochi a mangé.
 *   0 s'il n'avait pas faim.
 */
int nourrir(Tamagochi *t)
{
    int manger = 0;
    if (t->niveau_energie < t->niveau_energie_max)
    {
        t->niveau_energie = t->niveau_energie + rand() % 3;
        printf("Miam ! C'est bon\n");
        manger = 1;
    }
    else
    {
        printf("Je n'ai pas faim\n");
        manger = 0;
    }
    return manger;
}
/**
 * Fait perdre un point d'énergie au Tamagochi.
 *
 * Si son énergie atteint 0, il est considéré comme KO.
 *
 * Paramètre :
 *   t : pointeur vers le Tamagochi.
 *
 * Valeur de retour :
 *   1 si le Tamagochi possède encore de l'énergie.
 *   0 s'il est KO.
 */
int consommer_Energie(Tamagochi *t)
{
    int KO = 0;
    t->niveau_energie = t->niveau_energie - 1;
    if (t->niveau_energie <= 0)
    {
        printf("Je suis KO\n");
        KO = 0;
    }
    else
    {
        KO = 1;
    }
    return KO;
}
/**
 * Affiche les informations d'un Tamagochi.
 *
 * Paramètre :
 *   ptr : pointeur vers le Tamagochi à afficher.
 *
 * Valeur de retour :
 *   aucune (void).
 */
void afficherTamagochi(Tamagochi *ptr)
{
    printf("%s\n", ptr->nom);
    printf("%d\n", ptr->age);
    printf("%d/%d\n", ptr->niveau_energie, ptr->niveau_energie_max);
}

// permet de faire augmenter l'age de 1 de  tous les Tamagochi present dans groupe
// parametre : groupe tableau de Tamagochi, nbTamagochi quantité de tamagochi dans groupe
// Valeur de retour : void aucune
/**
 * Fait vieillir tous les Tamagochi du groupe.
 *
 * Chaque appel augmente l'âge de chaque Tamagochi de 1 an.
 *
 * Paramètres :
 *   groupe       : tableau contenant les Tamagochi.
 *   nbTamagochi  : nombre de Tamagochi présents.
 *
 * Valeur de retour :
 *   aucune (void).
 */
void veillir(Tamagochi groupe[10], int nbTamagochi)
{
    for (int i = 0; i < nbTamagochi; i++)
    {
        groupe[i].age++;
    }
}
/**
 * Joue un tour de jeu.
 *
 * Pour chaque tour :
 *  - les Tamagochi parlent ;
 *  - le joueur choisit lequel nourrir ;
 *  - le Tamagochi choisi perd de l'énergie ;
 *  - tous les Tamagochi vieillissent ;
 *  - les conditions de mort sont vérifiées.
 *
 * Paramètres :
 *   groupe       : tableau des Tamagochi.
 *   nbTamagochi  : nombre de Tamagochi.
 *   round        : numéro du tour.
 *
 * Valeur de retour :
 *   1 pour continuer la partie.
 *   0 pour arrêter la partie.
 */
int jouerTour(Tamagochi groupe[10], int nbTamagochi, int round)
{
    int choixTamagochi = 0;

    printf("----- Cycle %d -----\n", round);
    for (int i = 0; i < nbTamagochi; i++)
    {
        printf("%s : ", groupe[i].nom);
        parler(&groupe[i]);
        printf("\n");
    }

    printf("nourrir quel Tamagochi\n");
    for (int i = 0; i < nbTamagochi; i++)
    {
        printf("%d   %s    ", i, groupe[i].nom);
    }
    printf("\n");
    scanf("%d", &choixTamagochi);

    // Le Tamagochi dépense de l'énergie puis mange
    consommer_Energie(&groupe[choixTamagochi]);
    nourrir(&groupe[choixTamagochi]);

    // Tous les Tamagochi vieillissent
    veillir(groupe, nbTamagochi);

    afficherTamagochi(&groupe[0]);

    // Vérification des conditions de mort
    for (int i = 0; i < nbTamagochi; i++)
    {
        if (groupe[i].age >= 10 || groupe[i].niveau_energie <= 0)
        {
            groupe[i].mort = 1;
        }
    }

    // La partie dure 5 tours
    if (round == 5)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}