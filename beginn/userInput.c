#include <stdio.h>

int main(){
    
    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?\n\r")
    scanf("&c" &name)

    printf("\nHow old are you?: ");
    scanf("%d", &age);

    printf("you are %d years old", age);


    return 0;
}