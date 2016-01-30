#include <stdio.h>
#include <stdlib.h>

int main(){

    double salar,Nsalar,reajuste;

    scanf("%lf", &salar);

    if(salar>=0 && salar<=400){
        reajuste=salar*0.15;
        Nsalar=salar+reajuste;
        printf("Novo salario: %.2lf\n",Nsalar);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if(salar>400 && salar<=800){
        reajuste=salar*0.12;
        Nsalar=salar+reajuste;
        printf("Novo salario: %.2lf\n",Nsalar);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if(salar>800 && salar<=1200){
        reajuste=salar*0.10;
        Nsalar=salar+reajuste;
        printf("Novo salario: %.2lf\n",Nsalar);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if(salar>1200 && salar<=2000){
        reajuste=salar*0.07;
        Nsalar=salar+reajuste;
        printf("Novo salario: %.2lf\n",Nsalar);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else{
        reajuste=salar*0.04;
        Nsalar=salar+reajuste;
        printf("Novo salario: %.2lf\n",Nsalar);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 4 %%\n");
    }


system("pause");
return 0;
}
