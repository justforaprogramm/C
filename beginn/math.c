#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(){
    // anmerkung, nicht hintereinander diekt deklarieren/ initialisieren
    double A = sqrt(9), B = pow(2, 4), F = fabs(-100), G = log(3), H = sin(45), II = cos(45), J = tan(45);
    int C = round(3.14), D = floor(3.99), E = ceil(3.14);

    printf("\n%lf\n", A);


    double complex z = 2.0 + 4.0*I;
    double complex z2 = conj(z);
    printf("conj: %.1f%+.1fi\n", creal(z2), cimag(z2));
    return 0;
}