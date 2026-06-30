#include <stdio.h>

struct Student
{
    char prenom[50];
    int age;
    float notes[3];
};


int main(void)
{
    struct Student student1;

    printf("Entrez un prenom : ");
    scanf("%s", student1.prenom);

    printf("Entrez un age : ");
    scanf("%d", student1.age);

    printf("Entrez vos notes : ");
    scanf("%d", student1.notes);

    printf("Prenom: %s\n", student1.prenom);
    printf("Age : %d\n", student1.age);
    printf("Notes : %d\n", student1.notes);

    return 0;
}