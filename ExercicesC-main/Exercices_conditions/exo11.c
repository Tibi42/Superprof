#include <stdio.h>

int main(void)
{
    int note;
    printf("Saisissez une note entre 0 et 100\n");
    scanf("%d", &note);

    if (note >= 90)
    printf("A\n");
    else if (note >= 80)
    printf("B\n");
    else if (note >= 70)
    printf("C\n");
    else if (note >= 60)
    printf("D\n");
    else if (note <=59)
    printf("F\n");
    else
    printf("Note invalide\n");

    return 0;
}