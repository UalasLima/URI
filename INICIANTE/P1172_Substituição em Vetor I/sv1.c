#include <stdio.h>

int main () {

    int i, x, X[10];

    for (i = 0; i < 10; i++) {
        scanf ("%d", &x);
        if (x > 0)
            X[i] = x;
        else
            X[i] = 1;
    }

    for (i = 0; i < 10; i++)
        printf("X[%d] = %d\n", i, X[i]);



return 0;
}
