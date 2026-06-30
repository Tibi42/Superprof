#include <stdio.h>

int  main(void)
{
    int duo;

    for(duo = 3 ; duo <= 100 ; duo=duo+3)
    {
        printf("%d\t", duo);
    }
    putchar('\n');
    return 0;
}