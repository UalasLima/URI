#include <stdio.h>
#include <stdlib.h>

int main(){

    int C,Q;

    scanf("%d %d", &C,&Q);

    if (C==1)
        printf("Total: R$ %.2lf\n", Q*4.00);
    else if (C==2)
        printf("Total: R$ %.2lf\n", Q*4.50);
    else if (C==3)
        printf("Total: R$ %.2lf\n", Q*5.00);
    else if (C==4)
        printf("Total: R$ %.2lf\n", Q*2.00);
    else if (C==5)
        printf("Total: R$ %.2lf\n", Q*1.50);



system("pause");
return 0;
}
