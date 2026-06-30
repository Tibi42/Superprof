#include <stdio.h>
int main() {
    char letter;
    int number;
    float double_number;
    double long_number;

    letter =  'A';
    number = 10;
    double_number = 10.5;
    long_number = 10000000.0009;

    printf("letter: %c\n", letter);
    printf("number: %d\n", number);
    printf("double_nubmer: %f\n", double_number);
    printf("long_number: %f\n", long_number);

    printf("%C\n%d\n%f\n%f\n", letter, number, double_number, long_number);
    return(0);
}


