#include <stdio.h>
#include <stdlib.h>

int main(){

    int cpeca1,npeca1,cpeca2,npeca2;
    double vpeca1,vpeca2;

    scanf("%d", &cpeca1);
    scanf("%d", &npeca1);
    scanf("%lf", &vpeca1);

    scanf("%d", &cpeca2);
    scanf("%d", &npeca2);
    scanf("%lf", &vpeca2);

    printf("VALOR A PAGAR: R$ %.2lf\n", npeca1*vpeca1+npeca2*vpeca2);

system("pause");
return 0;
}
