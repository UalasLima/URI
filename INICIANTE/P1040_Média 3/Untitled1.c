#include <stdio.h>

int main(){

    double N1,N2,N3,N4,M,exame;

    scanf("%lf %lf %lf %lf", &N1,&N2,&N3,&N4);

    M=((N1*2+N2*3+N3*4+N4*1)/(2+3+4+1));
    printf("Media: %.1lf\n", M);

    if (M>=7.0)
        printf("Aluno aprovado.\n");
    else if (M<5.0)
        printf("Aluno reprovado.\n");
    else if (5.0<=M && M<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        M=(M+exame)/2;
        if (M>=5.0)
            printf("Aluno aprovado.\n");
        else if(M<5.0)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",M);
    }

return 0;
}
