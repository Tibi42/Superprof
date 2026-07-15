#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret,guess;

    srand((unsigned)time(NULL));
    secret=rand();
    printf("Can you guess the secret number: ");
    scanf("%d",&guess);
    if(guess==secret)
    {
        puts("You guessed it!");
        return(0);
    }
    else
    {
        puts("Wrong!");
        printf("The secret number was %d\n",secret);
        return(1);
    }
}