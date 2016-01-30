#include <stdio.h>
#include <stdlib.h>

int main(){

    int X;

    scanf("%d", &X);

    printf("%d ano(s)\n", X/365);
    X=X%365;
    printf("%d mes(es)\n", X/30);
    X=X%30;
    printf("%d dia(s)\n", X);

system("pause");
return 0;
}
