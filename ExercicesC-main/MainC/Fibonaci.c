#include <stdio.h>

int main(void)
{
    int nombre;
    int terme1 = 0;
    int terme2 = 1;
    int nouveau_terme;

    printf("Entrez un nombre de termes a afficher : ");
    scanf("%d", &nombre);

    for(int i = 0; i <= nombre; i++  )
    {
        printf("%d\n", terme1);
        nouveau_terme = terme1 + terme2;
        terme2 = terme1;
        terme1 = nouveau_terme;
    }
    return 0;
}