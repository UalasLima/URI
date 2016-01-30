#include <stdio.h>
#include <stdlib.h>

int main(){

    int X;
    double Y;

    scanf("%d", &X);
    scanf("%lf", &Y);

    printf("%.3lf km/l\n", X/Y);


system("pause");
return 0;

}
