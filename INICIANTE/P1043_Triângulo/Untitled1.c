#include <stdio.h>
#include <stdlib.h>

int main(){

    double A, B, C;

    scanf("%lf %lf %lf", &A,&B,&C);
    system("clear");

    if(A+B>C && B+C>A && C+A>B)
        printf("Perimetro = %.1lf\n", A+B+C);
    else
        printf("Area = %.1lf\n", (A+B)*C/2);


return 0;
}
