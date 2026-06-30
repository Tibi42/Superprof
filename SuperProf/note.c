#include <stdio.h>

int main() 
{
   int tab[6] = {3, 6, 9, 10, 25, 20};
   int newMax = 1; 
   int max = 1;

   for( int i = 0 ; i<6 ; i++)
   {
        int newMax = tab[i];
        
        if( tab[i] > max)
        {
            max = newMax;
        }
   }
   
   printf("%d\n", max); 
}