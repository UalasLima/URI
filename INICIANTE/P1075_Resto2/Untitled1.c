#include <stdio.h>

int main(){



    int N,I;
    I=1;

    scanf("%d", &N);

    if(N<10000){
        while(I<10000){
            I++;
            if(I%N==2)
                printf("%d\n", I);
        }
    }



    return 0;
}
