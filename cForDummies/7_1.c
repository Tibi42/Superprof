#include <stdio.h>
int main() {

    int a, b, c;

    printf("entrez 3 caracteres: ");
    a = getchar();
    b = getchar();
    c = getchar();
    printf("le caractere est %d\n, %d\n, %d\n", a, b, c);

    return(0);
}