#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  char nom[25];
  int age;
  int niveau_energie;
  int niveau_energie_max;
  int mort;
} Tamagochi;

#define duree_vie 10

void afficherTamagochi(Tamagochi *ptr);

void initialiserTamagochi(Tamagochi *t, const char *nom);
int parler(Tamagochi *t);
int nourrir(Tamagochi *t);
int consommer_Energie(Tamagochi *t);
void veillir(Tamagochi groupe[10], int nbTamagochi);
int jouerTour(Tamagochi groupe[10], int nbTamagochi, int round);

int main(void) {
  srand(time(NULL));
  int continuer = 0;
  Tamagochi groupe[10];
  int nbTamagochi = 0;
  int tour = 1;
  printf("Combien voulez vous de Tamagochi\n");
  scanf("%d", &nbTamagochi);

  for (int i = 0; i < nbTamagochi; i++) {
    initialiserTamagochi(&groupe[i], NULL);
    afficherTamagochi(&groupe[i]);
  }
  do {
    continuer = jouerTour(groupe, 1, tour);
    tour++;
  } while (continuer == 1);

  return 0;
}

void initialiserTamagochi(Tamagochi *t, const char *nom) {
  printf("Quel est le nom de votre Tamagochi ?\n");
  scanf("%s", t->nom);
  printf("Quel est l'age de votre Tamagochi ?\n");
  scanf("%d", &t->age);
  t->mort = 0;
  t->niveau_energie_max = rand() %5 + 4;
  t->niveau_energie = rand() %3 + 4;
  if(t->niveau_energie_max < t->niveau_energie){
    t->niveau_energie = t->niveau_energie_max;
  }
  // rand()et srand(time(NULL)) pour choisir au hasard
  // printf("%d\n", rand()%4+3);
  // printf("%d\n", rand()%5+4);
}

int parler(Tamagochi *t) {
  int moral = 0;

  if (t->niveau_energie > 4) {
    printf("tout va bien\n");
    moral = 1;
  } else {
    printf("je suis affamé\n");
    moral = 0;
  }

  return moral;
}

int nourrir(Tamagochi *t) {
  int manger = 0;
  if (t->niveau_energie < t->niveau_energie_max) {
    t->niveau_energie = t->niveau_energie + rand() %3;
    printf("Miam ! C'est bon\n");
    manger = 1;
  } else {
    printf("Je n'ai pas faim\n");
    manger = 0;
  }
  return manger;
}

int consommer_Energie(Tamagochi *t) {
  int KO = 0;
  t->niveau_energie = t->niveau_energie - 1;
  if (t->niveau_energie <= 0) {
    printf("Je suis KO\n");
    KO = 0;
  } else {
    KO = 1;
  }
  return KO;
}

void afficherTamagochi(Tamagochi *ptr) {
  printf("%s\n", ptr->nom);
  printf("%d\n", ptr->age);
  printf("%d/%d\n", ptr->niveau_energie, ptr->niveau_energie_max);
}

// permet de faire augmenter l'age de 1 de  tous les Tamagochi present dans groupe
// parametre : groupe tableau de Tamagochi, nbTamagochi quantité de tamagochi dans groupe
// Valeur de retour : void aucune
void veillir(Tamagochi groupe[10], int nbTamagochi){
    for( int i = 0 ; i < nbTamagochi ; i++){
        groupe[i].age++;
    }
}

int jouerTour(Tamagochi groupe[10], int nbTamagochi, int round) {
  int choixTamagochi = 0;

  printf("----- Cycle %d -----\n", round);
  for (int i = 0; i < nbTamagochi; i++) {
    printf("%s : ", groupe[i].nom);
    parler(&groupe[i]);
    printf("\n");
  }

  printf("nourrir quel Tamagochi\n");
  for (int i = 0; i < nbTamagochi; i++) {
    printf("%d   %s    ", i, groupe[i].nom);
  }
  printf("\n");
  scanf("%d", &choixTamagochi);
  consommer_Energie(&groupe[choixTamagochi]);
  nourrir(&groupe[choixTamagochi]);
  veillir( groupe, nbTamagochi);

  afficherTamagochi(&groupe[0]);

  for( int i = 0 ; i < nbTamagochi; i++){
  if(groupe[i].age >= 10 || groupe[i].niveau_energie <=0 ){
    groupe[i].mort = 1;
  }}
  
  if (round == 5) {
    return 0;
  } else {
    return 1;
  }
}