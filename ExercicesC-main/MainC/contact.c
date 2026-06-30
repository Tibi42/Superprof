#include <stdio.h>

struc Contact{
    char prenom[50];
    char telephone[20];
    int age;
};

int main(void)
{
    struct Contact contacts[3];

    for (int i = 0; i < 3; i++)
    {
        printf("entrez un prenom \n");
        scanf("%s", contact[i].prenom);

        printf("Entrz un numero de telephone:\n");
        scanf("%s", contact[i].telephone);

        printf("Entrez un age :\n");
        scanf("%d", &contact[i].age);
    }

    return 0;
}