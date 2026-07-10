#include <stdio.h>

int main()
{
    float celciusToF = 3.1;
    float Faraneith = 0.1;
    printf("choisissez la temperature Celsuis a convertir\n");
    scanf("%f", &celciusToF);
    
    Faraneith = celciusToF * 9 / 5 + 32 ;
    
    printf("la temperature en Faraneith est de : %.2f", Faraneith);


    return 0;
}
