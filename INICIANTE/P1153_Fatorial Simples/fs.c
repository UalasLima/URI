#include <stdio.h>

int main() {

    int n, aux;

    scanf("%d", &n);
    aux = n - 1;
    if(n > 0 && n < 13){
        while(aux >= 1) {
            n = n * aux;
            aux--;
        }
        printf("%d\n", n);
    }

return 0;
}
