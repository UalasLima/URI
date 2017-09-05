#include <stdio.h>
#include <stdlib.h>

int main(){

    int A, B;

    scanf("%d %d", &A,&B);
    system("clear");

    if(A%B==0 || B%A==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");



return 0;
}
