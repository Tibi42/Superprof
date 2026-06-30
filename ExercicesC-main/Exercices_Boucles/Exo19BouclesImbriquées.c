#include <stdio.h>

int main(void)
{
    int ligne = 5;
    for(int i = 1; i<= ligne; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}