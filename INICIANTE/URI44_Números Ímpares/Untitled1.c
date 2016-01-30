#include <stdio.h>
#include <stdlib.h>

int main(){

    int I,X;
    scanf("%d", &X);

    for(I=1;I<=X;I++){
        if(I%2!=0)
            printf("%d\n",I);
    }

system("pause");
return 0;
}
