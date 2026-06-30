#include <stdio.h>

int main(void)
{
    int resteMonnaie = 3389;
    int nombreBillets = 0;
    

        int table[6] = {500,200,100,50,20,10};

        for ( int i = 0 ; i < 6 ; i++)
        {
            nombreBillets = (resteMonnaie / table[i]);
            printf("%d\n", resteMonnaie  - (nombreBillets * table[i]));
            resteMonnaie = resteMonnaie - (nombreBillets * table[i]);
            printf("%d\n", resteMonnaie); 
            printf("%d ", nombreBillets);     
            printf("%d billets\n", table[i]);     
            
        }

    return 0;
}