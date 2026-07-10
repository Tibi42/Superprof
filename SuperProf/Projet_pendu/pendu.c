/* créer le célèbre Jeu du Pendu. Voici une
liste de fonctionnalités possibles. N'hésites pas à l'agrémenter comme
bon te semble.

Signatures des Fonctions possibles
void choisirMot();
void afficherMotCache();
int verifierLettre();
int motTrouve();
void afficherPendu();
void jouer();

Fonctionnalités

Le programme permettra de :

Afficher le mot caché (_ _ _ _)
Saisir une lettre
Vérifier si la lettre est présente
Compter les erreurs
Détecter la victoire
Détecter la défaite


Bonus
Rejouer une partie
Afficher un score
Empêcher les lettres déjà proposées
Afficher le dessin du pendu (7 étapes)
Charger un mot aléatoire depuis un fichier
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void initialiserTableau();
void choisirMot();
void afficherMotCache();
void verifierLettre(char lettre);
int motTrouve();
void afficherPendu();
void jouer();
void rejouer();
void afficherScore();
bool lettrePropose(char lettre);

char mot[10];
char lettres_Trouves[10];
int count = 0;
int score = 0;

int main(void) {
  printf("Bienvenue au jeu du pendu \n");
  jouer();
  return 0;
}

void jouer() {
  char lettre_unique = 0;
  count = 0;
  choisirMot();
  initialiserTableau();

  for (int i = 0; i < 7; i++) {

    do {
      printf("Quelle lettre voulez vous tester ? \n");
      scanf(" %c", &lettre_unique);
    } while (!lettrePropose(lettre_unique));
    
    verifierLettre(lettre_unique);
    afficherMotCache();
    afficherPendu();
    if (motTrouve()) {
      printf("Bravo, vous avez trouvé le mot !\n");
      score++;
      break;
    }
  }
  if (!motTrouve()) {
    printf("Le mot a trouver etait : %s \n", mot);
  }
  afficherScore();
  rejouer();
}

void initialiserTableau() {
  for (int i = 0; i < 10; i++) {
    if (mot[i] == 0) {
      lettres_Trouves[i] = 0;
      break;
    } else {
      lettres_Trouves[i] = '*';
    }
  }
}

void choisirMot() {
  printf("Choisi un mot \n");
  scanf("%s", mot);
}

void afficherMotCache() {
  printf("le mot a trouver etait : %s \n", lettres_Trouves);
}

void verifierLettre(char lettre) {

  for (int i = 0; i < 10; i++) {
    if (mot[i] == lettre) {
      lettres_Trouves[i] = lettre;
    }
  }
}

int motTrouve() { return strcmp(lettres_Trouves, mot) == 0; }

void afficherScore() { printf("Votre score est : %d\n", score); }

void afficherPendu() {
  count++;
  switch (count) {
  case 1:
    printf("+---+\n");
    printf("|   |\n");
    printf("    |\n");
    printf("    |\n");
    printf("    |\n");
    printf("    |\n");
    printf("=========\n");
    break;

  case 2:
    printf(" +---+\n");
    printf(" |   |\n");
    printf(" o   |\n");
    printf("     |\n");
    printf("     |\n");
    printf("     |\n");
    printf("=========\n");
    break;
  case 3:
    printf(" +---+\n");
    printf(" |   |\n");
    printf(" o   |\n");
    printf(" |   |\n");
    printf("     |\n");
    printf("     |\n");
    printf("=========\n");
    break;
  case 4:
    printf(" +---+\n");
    printf(" |   |\n");
    printf(" o   |\n");
    printf("/|   |\n");
    printf("     |\n");
    printf("     |\n");
    printf("=========\n");
    break;
  case 5:
    printf(" +---+\n");
    printf(" |   |\n");
    printf(" o   |\n");
    printf("/|\\  |\n");
    printf("     |\n");
    printf("     |\n");
    printf("=========\n");
    break;
  case 6:
    printf(" +---+\n");
    printf(" |   |\n");
    printf(" o   |\n");
    printf("/|\\  |\n");
    printf("/    |\n");
    printf("     |\n");
    printf("=========\n");
    break;
  case 7:
    printf(" +---+\n");
    printf(" |   |\n");
    printf(" o   |\n");
    printf("/|\\  |\n");
    printf("/ \\  |\n");
    printf("     |\n");
    printf("=========\n");
    printf("perdu\n");
    break;
  }
}

void rejouer() {
  char choix = 0;
  printf("Voulez vous rejouer ? : o/n\n");
  scanf(" %c", &choix);
  if (choix == 'o' || choix == 'O') {
    jouer();
  }
}

bool lettrePropose(char lettre) {
  for (int i = 0; i < 10; i++) {
    if (lettres_Trouves[i] == lettre) {
      printf("Vous avez deja jouer cette lettre\n");
      return false;
    }
  }
  return true;
}