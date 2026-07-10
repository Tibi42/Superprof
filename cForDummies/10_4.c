#include <stdio.h>

void graph(int);

int main()
{
    int value, count2 = 0;

    value = 2;

    while(value<=64)
    {
        graph(value);

        printf("Value is %d %d\n",value, ++count2);
      
        value = value * 2;
    }
    return(0);
}

void graph(int count)
{
    int x;
    for(x=0;x<count;x=x+1)
        putchar('*');
    putchar('\n');
    
}