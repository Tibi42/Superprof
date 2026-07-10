#include <stdio.h>



int main(){

    
    int age = 18;
    int *ptr;
    ptr = &age;
    printf("valeur de age:  %d\n", age);
    printf("valeur pointée:  %d\n", *ptr);
    printf("adresse de age :  %p\n", &age);
    printf("le contenu du pointeur:  %p\n", ptr);


}