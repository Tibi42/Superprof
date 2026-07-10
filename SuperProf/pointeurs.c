#include <stdio.h>


int ajouter(int *param1);
int main(void)
{
    int variable  = 0;

    printf("%d\n", ajouter(&variable));

    return 0;
}

int ajouter(int *param1){

    return *param1 = *param1 +1;
}