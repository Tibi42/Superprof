#include <stdio.h>

int main(void)
{
    float temperature;
    printf("Entrez la temperature en Celcius : ");
    scanf("%f", &temperature);
    
    printf("La temperature en faraneith est de : %.2f\n", 
        temperature * 9/5 + 32);
    return 0;

}