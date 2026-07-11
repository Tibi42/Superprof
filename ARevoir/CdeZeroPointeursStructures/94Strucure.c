#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main()
{
    Point p = {3, 4};
    printf("%d,%d\n", p.x, p.y);

    return 0;
}