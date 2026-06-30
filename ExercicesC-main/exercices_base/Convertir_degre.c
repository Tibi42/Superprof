#include <stdio.h>
 int main(void)
 {
    float celcius;
    float faraneith;

    printf ("Saisissez une temperature en Celcius pour la convertir en Faraneith :");
    scanf("%f\n", &celcius);
    faraneith = celcius * 9 / 5 + 32;
    printf("La temperature convertie en Faraneith est : %.2f\n", faraneith );

    return 0;
}

#include <stdio.h>
 
int main(void) {
    float celsius, fahrenheit;
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("En Fahrenheit : %.2f\n", fahrenheit);
    return 0;
}