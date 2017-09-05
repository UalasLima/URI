#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A,B,C,A2,B2,C2;

    scanf("%lf %lf %lf", &A,&B,&C);
    system("clear");

    if(A>B && B>=C)
        A2=A, B2=B, C2=C;
    else if(A>C && C>B)
        A2=A, C2=B, B2=C;
    else if(B>A && A>=C)
        A2=B, B2=A, C2=C;
    else if(B>C && C>A)
        A2=B, B2=C, C2=A;
    else if(C>A && A>=B)
        A2=C, B2=A, C2=B;
    else if(C>B && B>A)
        A2=C, B2=B, C2=A;
    else
        A2=A, B2=B, C2=C;

    if(A2>=B2+C2)
        printf("NAO FORMA TRIANGULO\n");
    else if(pow(A2,2)==(pow(B2,2)+pow(C2,2)))
        printf("TRIANGULO RETANGULO\n");
    else if(pow(A2,2)>(pow(B2,2)+pow(C2,2)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if (pow(A2,2)<(pow(B2,2)+pow(C2,2)))
        printf("TRIANGULO ACUTANGULO\n");

    if(A2==B2 && B2==C2)
        printf("TRIANGULO EQUILATERO\n");
    else if(A2==B2 || A2==C2 || B2==C2)
        printf("TRIANGULO ISOSCELES\n");



return 0;
}
