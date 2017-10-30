#include <stdio.h>

int main() {

    float n, tot=0;
    float media, i=0;

    scanf("%f", &n);

    while(n >= 0){
        i++;
        tot = tot + n;
        scanf("%f", &n);
    }

    if(tot >= 0){
        media = (tot / i);
        printf("%.2f\n", media);
    }

return 0;
}
