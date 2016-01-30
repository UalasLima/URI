#include <stdio.h>
#include <stdlib.h>

int main(){

    int I,aux;
    double A,B;

    aux=0;
    B=0;


    for(I=0;I<6;I++){
        scanf("%lf", &A);
        if(A>0){
            aux++;
            B=B+A;
        }
    }

    B=B/aux;

    printf("%d valores positivos\n",aux);
    printf("%.1lf\n", B);


system("pause");
return 0;
}
