#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generate_num(int min, int max);
int guess();
bool printit(int guess, int gen);

int main(void)
{   
    int gentnum;
    int min_gn;
    int max_gn;

    printf("\nnumber guessing game, from Min(>0) to Max(<10000): ");
    
    printf("\nNumber Min: ");
    scanf("%d", &min_gn);

    printf("\nNumber Max: ");
    scanf("%d", &max_gn);

    if(min_gn < 0) min_gn = 0;
    if(max_gn > 10000) max_gn = 10000;
    if(min_gn > max_gn)
    {
        min_gn = 0;
        max_gn = 10000;
    }

    gentnum = generate_num(min_gn, max_gn);

    do{}
    while( false == printit(guess(),gentnum)); 

    return 0;
}

int generate_num(int min, int max)
{
    srand(time(0));
    return (rand() % max) + min; 
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