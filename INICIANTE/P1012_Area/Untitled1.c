#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A,B,C,CIRCULO;
    const double pi=3.14159;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    CIRCULO=pi*pow(C,2);

    printf("TRIANGULO: %.3lf\n", A*C/2);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", (A+B)*C/2);
    printf("QUADRADO: %.3lf\n", pow(B,2));
    printf("RETANGULO: %.3lf\n", A*B);

system("pause");
return 0;

}
