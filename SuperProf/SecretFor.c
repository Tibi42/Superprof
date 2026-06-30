#include <stdio.h>

int main(void)
{
    int secret = 50;
    int nombre;

    for (int i = 0; i < 5; i++)
    {
        printf("Trouvez le bon nombre : ");
        scanf("%d", &nombre);

        if (nombre == secret)
        {
            printf("Vous avez trouve le nombre secret\n");
        }
        else if (nombre > secret)
        {
            printf("Le nombre secret est plus petit\n");
        }
        else
        {
            printf("Le nombre secret est plus grand\n");
        }
    }

    printf("Plus de tentatives.\n");

    return 0;
}
