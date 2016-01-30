#include <stdio.h>

int main(){

    double N;
    int cont=0;

    scanf("%lf", &N);

    printf("NOTAS:\n");

    while (N>=100){
        N=N-100;
        cont++;
    }
    printf("%d nota(s) de R$ 100.00\n", cont);
    cont=0;

    while (N>=50){
        N=N-50;
        cont++;
    }
    printf("%d nota(s) de R$ 50.00\n", cont);
    cont=0;

    while (N>=20){
        N=N-20;
        cont++;
    }
    printf("%d nota(s) de R$ 20.00\n", cont);
    cont=0;

    while (N>=10){
        N=N-10;
        cont++;
    }
    printf("%d nota(s) de R$ 10.00\n", cont);
    cont=0;

    while (N>=5){
        N=N-5;
        cont++;
    }
    printf("%d nota(s) de R$ 5.00\n", cont);
    cont=0;

    while (N>=2){
        N=N-2;
        cont++;
    }
    printf("%d nota(s) de R$ 2.00\n", cont);
    cont=0;



    printf("MOEDAS:\n");

    while (N>=1){
        N=N-1;
        cont++;
    }
    printf("%d moeda(s) de R$ 1.00\n", cont);
    cont=0;

    while (N>=0.50){
        N=N-0.50;
        cont++;
    }
    printf("%d moeda(s) de R$ 0.50\n", cont);
    cont=0;

    while (N>=0.25){
        N=N-0.25;
        cont++;
    }
    printf("%d moeda(s) de R$ 0.25\n", cont);
    cont=0;

    while (N>=0.10){
        N=N-0.10;
        cont++;
    }
    printf("%d moeda(s) de R$ 0.10\n", cont);
    cont=0;

    while (N>=0.05){
        N=N-0.05;
        cont++;
    }
    printf("%d moeda(s) de R$ 0.05\n", cont);
    cont=0;

    while (N>=0.01){
        N=N-0.01;
        cont++;
    }
    printf("%d moeda(s) de R$ 0.01\n", cont);


return 0;
}
