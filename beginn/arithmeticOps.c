#include <stdio.h>

int main(){
    //+ - * / % ++ -- 
    int x = 5;
    int y = 2;
    
    printf(5+2); //7
    printf(5-2); //3
    printf(5*2); //10
    printf(5/2); //2.5 => 2
    printf(5/ (float) 2); //2.5
    printf(5%2); //1

    printf(5++); //6
    printf(5--); //4

    //addition
    int x=5, y=2;
    float z;

    if(x%y != 0){
        z = x / (float) y;
    }else{
        z = x / y;
    }
    printf(z);
}