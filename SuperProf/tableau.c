#include <stdio.h>

int main(void)
{
    int table[5];
    //afficher le tableau
    printf("entrer 5 nombres\n");
    
    for( int i = 0 ; i <5; i++)
    {
        scanf("%d\n", &table[i]);
    }
    
    for( int i = 0; i < 5 ; i++)
    {
        printf("%d\n", table[i]);
    }
    return 0;
}