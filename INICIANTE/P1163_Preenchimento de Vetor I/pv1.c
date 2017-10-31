#include <stdio.h>

int main () {

    int x, N[10], i;

    scanf("%d", &x);
    N[0] = x;

    for (i = 1; i < 10; i++)
        N[i] = N[i-1] + N[i-1];

    for (i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, N[i]);



return 0;
}
