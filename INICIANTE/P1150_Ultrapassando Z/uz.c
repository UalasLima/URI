#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, z, i, cont = 1;


    scanf("%d", &x);

    for(z = x; z <= x;)
        scanf("%d", &z);

    i = x;

    while (x <= z){
        i++;
        x = x + i;
        cont++;
    }

    printf("%d\n", cont);


return 0;
}
