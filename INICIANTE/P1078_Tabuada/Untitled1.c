#include <stdio.h>

int main(){



    int N,I;

    scanf("%d", &N);
    system("clear");

    if(N>2 && N<1000){
        for(I=1;I<=10;I++)
            printf("%d x %d = %d\n", I,N,I*N);

    }



    return 0;
}
