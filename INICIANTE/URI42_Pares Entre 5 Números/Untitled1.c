#include <stdio.h>
#include <stdlib.h>

int main(){

    int I,A,aux;

    aux=0;

    for(I=0;I<5;I++){
        scanf("%d", &A);
        if(A%2==0)
            aux++;
    }

    printf("%d valores pares\n",aux);

system("pause");
return 0;
}
