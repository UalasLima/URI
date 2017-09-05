#include <stdio.h>

int main(){



    int I,N;
    double A,B,C,M;

    scanf("%d", &N);

    for(I=0;I<N;I++){
        scanf("%lf %lf %lf", &A,&B,&C);
        M=(A*2+B*3+C*5)/(2+3+5);
        printf("%.1lf\n", M);
    }



    return 0;
}
