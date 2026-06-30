#include <stdio.h>

int main(void)
{
    int notes[3] = {{14, 12, 16}, {4, 6, 9}};

    for (int i; i < 3; i++)
    {
        for (int j; j < 3; j++)
        {
            printf("%d", nombres[i][j]);
        }
        printf('\n');
    }

    return 0;
}