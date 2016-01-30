#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[9];
    double salario,totvendas;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &totvendas);

    printf("TOTAL = R$ %.2lf\n", salario+0.15*totvendas);


system("pause");
return 0;
}
