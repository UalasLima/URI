#include <stdio.h>

int main () {

    short int l, i, j;
    double totS = 0, totM = 0, M[12][12];
    char t;

    scanf ("%d", &l);
    scanf (" %c", &t);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++)
            scanf ("%lf", &M[i][j]);
    }

    if (t == 'S') {
        for (i = 0; i < 12; i++)
            totS += M[l][i];
        printf ("%.1f\n", totS);
    }
    else {
        if (t == 'M') {
            for (i = 0; i < 12; i++)
                totM += M[l][i];
            totM = totM / 12;
            printf ("%.1f\n", totM);
        }
    }


return 0;
}
