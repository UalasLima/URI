#include <stdio.h>
#include <stdlib.h>

int main(){

    int I,A,aux1,aux2,aux3,aux4;

    aux1=0;
    aux2=0;
    aux3=0;
    aux4=0;

    for(I=0;I<5;I++){
        scanf("%d", &A);

        if(A%2==0)
            aux1++;
        else
            aux2++;

        if(A>0)
            aux3++;
        else if(A<0)
            aux4++;
    }

    printf("%d valor(es) par(es)\n",aux1);
    printf("%d valor(es) impar(es)\n",aux2);
    printf("%d valor(es) positivo(s)\n",aux3);
    printf("%d valor(es) negativo(s)\n",aux4);



system("pause");
return 0;
}
