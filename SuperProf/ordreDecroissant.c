#include<stdio.h>

int main(void)
{
    int tableauCroissant[6]= {5, 7, 4, 8, 9, 18};
    int ordreCroissant[6];
    int temp = 0;

    for( int i = 0 ; i < 6 ; i++)
    {
        for ( int j = i + 1 ; j < 6 ; j++)
        {
            if (tableauCroissant[i]< tableauCroissant[j])
            {
                temp = tableauCroissant[i];
                tableauCroissant[i] = tableauCroissant[j];
                tableauCroissant[j] = temp;
            }
        }
        ordreCroissant[i] = tableauCroissant[i];
        printf("%d ,", ordreCroissant[i]);
    }

    return 0;
}