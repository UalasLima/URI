#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, horas;
    double valor;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", horas*valor);



system("pause");
return 0;
}
