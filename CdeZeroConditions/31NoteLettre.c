#include  <stdio.h>

int main()
{
    int note = 0;
    printf("saisissez un note entre 0 et 100\n");
    scanf("%d", &note);

    if (note >= 90 && note <= 100){
        printf("A");
    } else if (note >= 80 && note <=89 ){
        printf("B");
    }else if (note >= 70 && note <=79 ){
        printf("C");
    }else if (note >= 60 && note <=69 ){
        printf("D");
    }else if (note >= 0 && note <=59 ){
        printf("F");
    } else {
        printf("note invaldie");
    }
    return 0;
}