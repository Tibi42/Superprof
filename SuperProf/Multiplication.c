#include <stdio.h>

int main(void)
{
    int nombre = 1;

    printf("quelle talbe de multipplication voulez vous ? \n");
    scanf("%d", &nombre);

    for( int i =  0; i < 11; i++)
        {
            printf("%d x %d = %d \n", nombre, i, nombre * i);
        }

    return 0;
}
