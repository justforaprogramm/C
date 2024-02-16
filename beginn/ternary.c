#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
    //ternary:
    //(condition) ? value if true : value if false
}

int main(void){
    int max = findMax(5,4);

    printf("%d\n", max);

    return 0;
}