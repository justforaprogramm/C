#include <stdio.h>

int main(void){
    double prices[] = {5, 10, 15, 20};

    int size_price = sizeof(prices) / sizeof(prices[0]);

    printf("%d = [", size_price);
    for(int i = 0; i <size_price-1; i++){
        printf("%.2f, ", prices[i]);
    }
    printf("%.2lf]\n", prices[size_price-1]);

    return 0;
}