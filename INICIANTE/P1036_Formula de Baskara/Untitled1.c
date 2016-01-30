#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    double A, B, C, R1, R2,delta;

    scanf("%lf %lf %lf", &A,&B,&C);
    delta=pow(B,2)-4*A*C;
    R1=(-B+sqrt(delta))/(2*A);
    R2=(-B-sqrt(delta))/(2*A);

    if (A==0 || (pow(B,2)-4*A*C)<0)
        printf("Impossivel calcular\n");
    else{
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
system("pause");
return 0;
}
