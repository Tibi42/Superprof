#include <stdio.h>
#include <string.h>
#include "affiche.h"




int main() {
    printf("hello world");
    affiche("bonjour la compilation de plusieurs fichiers");
    return 0;

}

// gcc -Wall -Wextra -std=c11 ./compil.c ./affiche.c -o  compil.exe