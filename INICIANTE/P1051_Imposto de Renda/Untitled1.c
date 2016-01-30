#include <stdio.h>
#include <stdlib.h>

int main(){

    double salar,reajuste;


    scanf("%lf", &salar);

    if(salar<=2000)
        printf("Isento\n");
    else{
        if(salar<=3000){
            salar=salar-2000;
            reajuste=salar*0.08;
            printf("R$ %.2lf\n", reajuste);
        }
        else if(salar<=4500){
            salar=salar-2000;
            reajuste=1000*0.08;
            salar=salar-1000;
            reajuste=reajuste+salar*0.18;
            printf("R$ %.2lf\n", reajuste);
        }
        else if(salar>4500){
            salar=salar-2000;
            reajuste=1000*0.08;
            salar=salar-1000;
            reajuste=reajuste+1500*0.18;
            salar=salar-1500;
            reajuste=reajuste+salar*0.28;
            printf("R$ %.2lf\n", reajuste);
        }
    }

system("pause");
return 0;
}
