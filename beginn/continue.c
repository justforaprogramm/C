#include <stdio.h>

int main(void){
    
    for(int i = 1; i <= 20; i++){
        if(i != 13){
            printf("%d\n", i);
        }else{
            continue;
            //break break out without continue the loop
        }
    }
    return 0;
}