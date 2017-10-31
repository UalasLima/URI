#include <stdio.h>

int main () {

    int i, j = 19, N[20], n[20];

    for (i = 0; i < 20; i++)
        scanf ("%d", &N[i]);

    for (i = 0; i < 20; i++, j--)
        n[i] = N[j];

    for (i = 0; i < 20; i++)
        printf ("N[%d] = %d\n", i, n[i]);


return 0;
}
