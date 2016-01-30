#include <stdio.h>
#include <stdlib.h>

int main(){


    int N,X,I,I1,I2;
    I1=0,I2=0;

    scanf("%d", &N);

    if(N<10000){
        for(I=0;I<N;I++){
            scanf("%d", &X);
            if(X>=10 && X<=20)
                I1++;
            else
                I2++;
        }
    }

    printf("%d in\n", I1);
    printf("%d out\n", I2);


system("pause");
return 0;
}
