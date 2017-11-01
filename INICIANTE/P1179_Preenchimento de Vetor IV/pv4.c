#include <stdio.h>

int main () {

    short int i, j = 0, l = 0;
    int x, impar[5], par[5];

    for(i = 0; i < 15; i++){
        scanf("%d", &x);
        if(x % 2 != 0){
            impar[j] = x;
            j++;
        }
        else {
            par[l] = x;
            l++;
        }

        if (j == 5){
            for (j = 0; j < 5; j++)
                printf("impar[%d] = %d\n", j, impar[j]);
            j = 0;
        }
        if (l == 5){
            for (l = 0; l < 5; l++)
                printf("par[%d] = %d\n", l, par[l]);
            l = 0;
        }
    }


    if (j > 0) {
        for (i = 0; i < j; i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    }

    if (l > 0) {
        for (i = 0; i < l; i++)
            printf("par[%d] = %d\n", i, par[i]);
    }


return 0;
}
