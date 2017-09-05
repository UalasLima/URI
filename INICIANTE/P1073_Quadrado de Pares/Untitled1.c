#include <stdio.h>
#include <math.h>

int main(){



    int N,I,aux;

    scanf("%d", &N);
    int X[N];

    if(N>5 && N<2000){
        for(I=1;I<=N;I++)
            X[I]=I;

        for(I=1;I<=N;I++){
            aux=X[I];
            if(aux%2==0)
            printf("%d^2 = %.0lf\n", aux,pow(aux,2));
        }
    }

    return 0;
}
