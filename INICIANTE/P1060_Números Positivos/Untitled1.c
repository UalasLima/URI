#include <stdio.h>
#include <stdlib.h>

int main(){

    int I,aux;
    double A;

    aux=0;


    for(I=0;I<6;I++){
        scanf("%lf", &A);
        if(A>0)
            aux++;
    }


    printf("%d valores positivos\n",aux);

system("pause");
return 0;
}
