#include <stdio.h>

int main(void)
{
    char prenom[15];

    printf("Entrez votre prenom : \n");
    scanf("%s", prenom);
    printf("Ravi de vous rencontrer %s.\n", prenom);
    return 0;
}