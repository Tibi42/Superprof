#include <stdio.h>
#include <math.h>

int main()
{
    float deux;

    printf("Le nombre saint de l'informatique\n");
    for( deux = 0.0 ; deux < 11; deux++){
        printf("2 puissance %.0f = %.0f\n", deux, pow(2.0,deux));
    }


    return 0;
}