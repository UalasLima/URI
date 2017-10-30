#include <stdio.h>

int main() {

int n, x, y, i = 0, tot = 0;

scanf("%d", &n);

while(n > 0){
    scanf("%d", &x);
    scanf("%d", &y);

    while(i < y){
        if(x%2!=0){
            tot = tot + x;
            i++;
        }
        x++;
    }
    i = 0;
    printf("%d\n", tot);
    tot = 0;
    n--;
}


return 0;
}
