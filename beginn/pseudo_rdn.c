#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    //  pseudo random numbers = A set of values or elements that are statistically andom
    //                          (Don't use for sort of cryptographic security)

    srand(time(0));

    int number1 = (rand() % 6) + 1;//a random number between 0 and 5, +1 => 1 and 6
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);
    return 0;
}