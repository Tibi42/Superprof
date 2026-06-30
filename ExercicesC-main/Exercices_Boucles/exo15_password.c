#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[20];

    do {
        printf("Entrez votre mot de passe : ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Mot de passe correct\n");

    return 0;
}