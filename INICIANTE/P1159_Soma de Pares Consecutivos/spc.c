#include <stdio.h>

int main() {

    int x, i = 0, tot = 0;

    scanf("%d", &x);
    while(x != 0){
        while(i < 5){
            if(x % 2 == 0){
                tot = tot + x;
                i++;
            }
            x++;
        }
        printf("%d\n", tot);
        tot = 0;
        i = 0;
        scanf("%d", &x);
    }



return 0;
}
