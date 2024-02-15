#include <stdio.h>
#include <stdbool.h>

int main(){
    // signed and not short
    int x;
    x = 123;
    // automatic int
    short age = 16;
    
    float pi = 3.14;
    
    //already signed
    char grade = 'A';
    char name[] = "BRO";

    printf("you are %u years old\n", age);
    printf("Hello %s!\n", name);
    printf("pi = %.2f\n",pi); 
    printf("%c", grade);

    /*
    %c  = char
    %s  = string = char[]
    %d  & %c  = bool (numbers formated as bool are hex-number (bool -128<127))

    %d  = int
    %u  = unsigneds
    %f  = float
    %.2f= just .00
    %.1f= just .0 
    %.0f= just .
    %lf = doubles
    %1  = minimum field width
    %-  = left align
    */

    return 0;

    /*
    unsigned = shift 1/2 of everything right
    short = half
    long = doubled
    (can be added multible times)
    long long int i = 8564319844;
    */
}