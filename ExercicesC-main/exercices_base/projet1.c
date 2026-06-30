#include <stdio.h>

int main(void)
{
    int celcius;
    float fahrenheit;

    printf("Saisisssez une temperature en Celcius a convertir en Fahrenheit :");
    scanf("%d", &celcius);
    fahrenheit = celcius * 9 / 5 + 32;

    printf("La temperature convertie est de : %.2f en Fahrenheit\n", fahrenheit);

    return 0;
}