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

  FILE *contact = NULL;
  contact = fopen("contact.txt", "w+");

  if (contact == NULL) {
    printf("erreur d'ouverture");
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

  return 0;
}

// au debut du fichier ecrire combien de personne on veut afficher
// faire printf des données 