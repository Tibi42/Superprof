#include <stdio.h>

int main(void)
{
    int secret = 12;
    int nombre;
    printf("Trouve le nombre secret\n");
    scanf("%d", &nombre);
    
    if( nombre == secret) 
        {
            printf("Vous avez trouvez le nombre secret\n");
        }
    else if (nombre > secret)  
        {
            printf("Le nombre secret est plus petit\n");
        }
    else  
        {
            printf("Le nombre secret est plus grand\n");
        }     
    return 0;
}