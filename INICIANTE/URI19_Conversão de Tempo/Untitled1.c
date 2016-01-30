#include <stdio.h>
#include <stdlib.h>

int main(){

    int X;

    scanf("%d", &X);

    printf("%d:", X/3600);
    X=X%3600;
    printf("%d:", X/60);
    X=X%60;
    printf("%d\n",X);

system("pause");
return 0;
}
