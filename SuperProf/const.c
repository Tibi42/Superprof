#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const int size = 3;
    char name[size];

    printf("Who are you? ");
    fgets(name, size, stdin);
    printf("Glad to meet you, %s.\n",name);
    system("pause");
    return(0);
}