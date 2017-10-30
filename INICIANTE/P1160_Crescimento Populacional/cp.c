#include <stdio.h>

int main() {

    int t, pa, pb, i, anos = 0;
    double g1, g2;

    scanf ("%d", &t);

    if (1 <= t && t <= 3000){
        for (i = 1; i <= t; i++){
            scanf ("%d", &pa);
            scanf ("%d", &pb);

            scanf("%lf", &g1);
            scanf("%lf", &g2);

            while (pa <= pb){
                pa = pa*(100+g1)/100;
                pb = pb*(100+g2)/100;
                anos++;
                if (anos > 100)
                    break;
            }
            if (anos <= 100)
                printf ("%d anos.\n", anos);
            else
                printf("Mais de 1 seculo.\n");
            anos = 0;
        }
    }


return 0;
}
