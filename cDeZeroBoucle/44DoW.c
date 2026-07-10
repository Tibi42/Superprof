#include <stdio.h>
#include <string.h>

int main()
{

    char mtp[50];

    do {
    printf("entrez le mot de passe\n");
    scanf("%s", mtp);
    }while (strcmp(mtp,"1234") !=0);

    printf("mot de passe correct");

    return 0;
}