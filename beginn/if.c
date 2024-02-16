#include <stdio.h>

int main(){
    
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18 && age < 200){
        printf("your older than 18\n");
    }else if(age < 0 || age >= 200){
        printf("your not a humen!\n");
    }else{
        printf("your younger than 18\n");
    }

    return 0;
}