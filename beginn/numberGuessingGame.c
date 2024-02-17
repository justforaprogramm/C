#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generate_num(int min, int max);
int guess();
bool printit(int guess, int gen);
void value_scan(int *min_gn, int *max_gn);
void valid_value(int *min_gn, int *max_gn);

int main(void)
{   
    int gent_num, min_gn, max_gn;

    value_scan(&min_gn, &max_gn);
    valid_value(&min_gn, &max_gn);

    gent_num = generate_num(min_gn, max_gn);

    while(false == printit(guess(),gent_num)){};

    return 0;
}


void value_scan(int *min, int *max){
    printf("\nnumber guessing game, from Min(>0) to Max(<50000): ");
    
    printf("\nNumber Min: ");
    scanf("%d", &*min);

    printf("\nNumber Max: ");
    scanf("%d", &*max);
}

void valid_value(int *min, int *max){
    if(*min < 0) *min = 0;
    if(*max > 50000) *max = 50000;
    if(*min > *max)
    {
        *min = 0;
        *max = 50000;
    }
}

int generate_num(int min, int max)
{
    srand(time(0));
    return (rand() % (max - min)) + 1 + min; 
}

int guess()
{
    int guesses;
    printf("\n\r**************\n\rGuess a number: ");
    scanf("%d", &guesses);
    printf("\t");

    return guesses;
}

bool printit(int guess, int gen)
{
    bool numberfound;

    if(guess < gen)
    {
        printf("\nto low number!\n\r");
        numberfound = false;
    }
    else if (guess > gen)
    {
        printf("\nto high number!\n\r");
        numberfound = false;
    }
    else
    {
        printf("\nYou found the number!\n");
        numberfound = true;
    }
    return numberfound;
}