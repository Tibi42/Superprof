#include <stdio.h>

int main()
{
    int nbPremier = 0;
    int acc = 0;

    printf("donner un nombre pour verifier s'il est premier\n");
    scanf("%d", &nbPremier);

    for(int i = 2; i <= nbPremier ; i++)
    {
        if(nbPremier % i > 0)
        {
        acc = 1;
        break;
        }
        if (i == nbPremier)
        acc = 0;
        

    }
    if(acc == 1)
    {
        printf("le nombren'est pas premier");
    }
    else
    {
        printf("le nombre eset premier");
    }
    return 0;
}