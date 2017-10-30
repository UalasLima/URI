#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i = 1, aux1 = 0, aux2 = 1;

    scanf("%d", &n);


    if(n < 46 && n > 0){
        while(i <= n){
            if(i == 1){
                printf("%d", aux1);
            }
            else {
                aux1 = aux1 + aux2;
                aux2 = aux1 - aux2;
                printf(" %d", aux1);
            }
            i++;
        }
    printf("\n");
    }


return 0;
}
