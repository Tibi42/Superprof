#include <stdio.h>

int main()
{
    int nbPremier = 0;
    int acc = 0;

    printf("Donnez un nombre pour verifier s'il est premier :\n");
    if (scanf("%d", &nbPremier) != 1) {
        printf("Erreur de saisie.\n");
        return 1;
    }

    if (nbPremier <= 1) {
        acc = 1; // Les nombres <= 1 ne sont pas premiers
    } else {
        for (int i = 2; i * i <= nbPremier; i++) {
            if (nbPremier % i == 0) {
                acc = 1; // Trouvé un diviseur, donc ce n'est pas un nombre premier
                break;
            }
        }
    }

    if (acc == 1) {
        printf("Le nombre %d n'est pas premier.\n", nbPremier);
    } else {
        printf("Le nombre %d est premier.\n", nbPremier);
    }

    return 0;
}