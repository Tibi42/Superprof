#include <stdio.h>

int main(void)
{

int n, sommePair = 0, SommeImpaire = 0;

printf("Saisissez un nombre : ");
scanf("%d", &n);

for (int i = 0; i <= n; i++)
{
    if(i % 2 == 0) sommePair +=i;
    else SommeImpaire +=i;
}
printf("La somme des nombres pairs est : %d\n", sommePair);
printf("La somme des nombres impaires est : %d\n", SommeImpaire);

return 0;
}