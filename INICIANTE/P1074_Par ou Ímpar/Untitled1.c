#include <stdio.h>

int main(){



    int N,X,I;

    scanf("%d", &N);

    if(N<10000){
        for(I=0;I<N;I++){
            scanf("%d", &X);
            if(X==0)
                printf("NULL\n");
            else if(X%2==0 && X>0)
                printf("EVEN POSITIVE\n");
            else if(X%2==0 && X<0)
                printf("EVEN NEGATIVE\n");
            else if(X%2!=0 && X>0)
                printf("ODD POSITIVE\n");
            else if(X%2!=0 && X<0)
                printf("ODD NEGATIVE\n");
        }
    }


    return 0;
}
