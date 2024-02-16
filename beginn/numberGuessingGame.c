#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generate_num();
int guess();
bool printit(int guess, int gen);

int main(void)
{   
    int gentnum;

    gentnum = generate_num();
    printf("\nnumber guessing game, fom 1 to 100: ");

    do{}
    while( false == printit(guess(),gentnum)); 

    return 0;
}

int generate_num()
{
    srand(time(0));
    return (rand() % 100) + 1; 
}

int guess()
{
    int guesses;
    printf("\n\r**************\n\rGuess a number: ");
    scanf("%d", &guesses);
    return guesses;
}

bool printit(int guess, int gen)
{
    bool numberfound;

    if(guess < gen)
    {
        printf("\nto low number!\n**************\n\r");
        numberfound = false;
    }
    else if (guess > gen)
    {
        printf("\nto high number!\n**************\n\r");
        numberfound = false;
    }
    else
    {
        printf("\nYou found the number!\n");
        numberfound = true;
    }
    return numberfound;
}