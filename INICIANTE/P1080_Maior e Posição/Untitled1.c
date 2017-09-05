#include <stdio.h>

int main(){



    int X,I,M,P;
    I=1,M=0;

    while(I<=100){
        scanf("%d", &X);
        if(X>M){
            M=X;
            P=I;
        }
        I++;
    }

    printf("%d\n", M);
    printf("%d\n", P);



    return 0;
}
