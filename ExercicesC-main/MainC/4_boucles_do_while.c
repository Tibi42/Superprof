#include <stdio.h>

int main(void)
{
    int i = 0;

    do {
        printf("%d\n", i);
        i = i + 1;
    } while (i < 5);
}