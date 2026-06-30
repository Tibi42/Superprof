#include <stdio.h>

int main(void)
{
    int duo;

    for (duo=2; duo<=100; duo=duo+2)
    {
        printf("%d\t", duo);
    }
    putchar('\n');
    return 0;

}