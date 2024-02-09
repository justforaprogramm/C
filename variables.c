#include <stdio.h>

int main(){
    int x;
    x = 123;
    int age = 16;
    
    float pi = 3.14;
    
    char grade = 'A';
    char name[] = "BRO";

    printf("you are %d years old\n", age);
    printf("Hello %s!\n", name);
    printf("pi = %f\n",pi); 
    printf("%c", grade);

    /*
    %c  = char
    %s  = string = char[]

    %d  = int
    %f  = float
    %.2f= just .00
    %.1f= just .0 
    %.0f= just .
    */

    return 0;
}