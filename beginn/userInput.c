#include <stdio.h>
#include <string.h>

int main(){
    
    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?: ");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?: ");
    scanf("%d", &age);

    printf("Hello %s,\n\r", name);
    printf("you are %d years old\n", age);

    return 0;
}