#include <stdio.h>

int main(void)
{
    int d = 5;
    float f = 3.14;
    char c ='a';

    printf("%d\n", d);
    printf("%.2f\n", f);
    printf("%c\n", c);

    printf("integer :%d\nfloat : %.2f\ncaractere : %c\n", d, f, c);

    return 0;
}