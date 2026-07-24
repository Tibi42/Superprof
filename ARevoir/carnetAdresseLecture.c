#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char tmpNom[50];
  char tmpPrenom[50];
  char tmpTelephone[20];
  //   int nombreDePersonneTotal= 0 ;
  int nombrePersonneAEnregistrer = 0;
  int nombrePersonneEnregistrer = 0;
  char ecrire = 0;
  FILE *contact = NULL;

  printf("voulez vous ecrire dans le fichier ?\n");
  scanf("%c", &ecrire);

  if (ecrire == 'o') {
    contact = fopen("contact.txt", "w+");
    if (contact == NULL) {
      printf("erreur d'ouverture en ecriture");
      return 1;
    }

    printf("Combien de peronne vouloez vous enregistrer dans vos contats ? \n");
    scanf("%d", &nombrePersonneAEnregistrer);

    do {
      printf("entrez nom\n");
      scanf("%s", tmpNom);
      getchar();
      printf("entrez prenom\n");
      scanf("%s", tmpPrenom);
      getchar();
      printf("entrez telephone\n");
      scanf("%s", tmpTelephone);
      getchar();

      fprintf(contact, "%s - %s - %s\n", tmpNom, tmpPrenom, tmpTelephone);

      nombrePersonneEnregistrer++;
    } while (nombrePersonneEnregistrer < nombrePersonneAEnregistrer);

    fclose(contact);
  } else {
    contact = fopen("contact.txt", "r");
    if (contact == NULL) {
      printf("erreur d'ouverture en lecture (le fichier n'existe peut-etre pas encore)\n");
      return 1;
    }

    printf("\n--- Liste des contacts ---\n");
    char ligne[150];
    while (fgets(ligne, sizeof(ligne), contact) != NULL) {
      printf("%s", ligne);
    }
    printf("\n--------------------------\n");

    fclose(contact);
  }

  return 0;
}

// au debut du fichier ecrire combien de personne on veut afficher
// faire printf des données