#include <stdio.h>
#include <math.h>

int main(){

    double radius;
    const double PI = 3.14159;
    printf("Enter Radius of circle: ");
    scanf("%lf", &radius);

    double cir = radius * 2 * PI;
    double Area = PI * radius * radius;

    printf("Circumference: %lf\n\rArea: %lf\n\r", cir, Area);

    return 0;
}