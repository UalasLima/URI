#include <stdio.h>
#include <stdlib.h>

int main(){

    int A,B;

    scanf("%d %d", &A,&B);
    system("clear");

    if(A==B)
        printf("O JOGO DUROU %d HORA(s)\n", 24);
    else if(A>B)
        printf("O JOGO DUROU %d HORA(s)\n", A-B);
    else
        printf("O JOGO DUROU %d HORA(s)\n", B-A);

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>


ESTE CÓDIGO ABAIXO FOI O QUE FUNCIONOU, COMO TENTEI VÁRIAS MUDANÇAS NO MEU E O
URI NÃO ACEITOU EU COPIEI ESSE DA NET E APENAS COLOQUEI O QUE TAVA FALTANDO.
int main()
{
      int i,j,x;
      scanf("%d%d",&i,&j);
      x = 24-i+j;
      if(x > 24)
      x = abs(24 - (24-i+j));
      printf("O JOGO DUROU %d HORA(S)\n",x);

return 0;
}*/


return 0;
}
