#include <stdio.h>

int main () {

    short int i, posi;
    int n, y;
    scanf ("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
        scanf ("%d", &x[i]);

    y = x[0];

    for (i = 0; i < n; i++) {
        if (x[i] < y) {
            y = x[i];
            posi = i;
        }
    }

    printf ("Menor valor: %d\n", y);
    printf ("Posicao: %d\n", posi);


return 0;
}
