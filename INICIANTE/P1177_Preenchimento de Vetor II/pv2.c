#include <stdio.h>

int main () {

    int t, i = 0, j = 0, N[1000];

    scanf ("%d", &t);

    while (i < 1000){
        if (j < t) {
            N[i] = j;
            j++;
        }
        if (j == t)
            j = 0;
        i++;
    }

    for (i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, N[i]);

return 0;
}
