#include <stdio.h>


int main(){

    int X,Y,A;
    A=0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(Y>X){
        int aux=X;
        X=Y;
        Y=aux;
    }

    for(Y=Y+1;Y<X;Y++){
        if(Y%2!=0)
            A=A+Y;
    }

    printf("%d\n", A);


return 0;
}
