#include <stdio.h>
 
int main(void) {
    int entier1;
    int entier2;
    
    printf("Entrez deux entiers : \n");
    scanf("%d %d", &entier1, &entier2);
    printf("Somme : %d\n", entier1 + entier2);

    return 0;
}