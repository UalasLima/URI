#include <stdio.h>
#include <stdlib.h>

int main(){

    double X;

    scanf("%lf", &X);

    if (0<=X && X<=25)
        printf("Intervalo [0,25]\n");
    else if (25<=X && X<=50)
        printf("Intervalo (25,50]\n");
    else if (50<=X && X<=75)
            printf("Intervalo (50,75]\n");
    else if (75<=X && X<=100)
            printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

system("pause");
return 0;
}
