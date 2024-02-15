#include <stdio.h>
#include <math.h>

int main(void){
    
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = A*A + B*B;
    C = sqrt(C);

    printf("Side C: %lf", C);

    return 0;
}