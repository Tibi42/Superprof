#include <stdio.h>

void transfert(int *param1, int  *param2, int *variableTransfert);

int main(){

    int variable1 = 1;
    int variable2 = 5;
    int variableTransfert = 0;

    transfert( &variable1, &variable2, &variableTransfert);

    printf(" la variable 1 : %d\n variable2: %d\n", variable1, variable2 );


    return 0;
}

void transfert(int *param1, int  *param2, int *variableTransfert){

    *variableTransfert = *param1;
    *param1 = *param2;
    *param2 = *variableTransfert;

}