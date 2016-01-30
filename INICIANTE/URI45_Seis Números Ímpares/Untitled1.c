#include <stdio.h>
#include <stdlib.h>

int main(){

    int I,Y[5],X;
    I=0;


    scanf("%d", &X);

    while(I<6){
    if(X%2!=0){
    Y[I]=X;
    printf("%d\n",Y[I]);
    I++;
    }
    X++;
    }

system("pause");
return 0;
}
