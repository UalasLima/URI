#include <stdio.h>

int main () {

    int i;
    double x, N[100];

    scanf ("%lf", &x);
    N[0] = x;

    for (i = 1; i < 100; i++)
        N[i] = N[i-1]/2;

    for (i = 0; i < 100; i++)
        printf("N[%d] = %.4f\n", i, N[i]);


return 0;
}
