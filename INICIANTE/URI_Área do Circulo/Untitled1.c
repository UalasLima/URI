#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
double area,raio;
const double pi=3.14159;

scanf("%lf", &raio);
area=pi*pow(raio,2);

printf("A=%.4lf\n", area);


system("pause");
return 0;

}
