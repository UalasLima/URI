#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int raio;
    double VOLUME;
    double pi=3.14159;


    scanf("%d", &raio);
    VOLUME=((4.0/3)*pi*pow(raio,3));
    printf("VOLUME = %.3lf\n", VOLUME);


system("pause");
return 0;

}
