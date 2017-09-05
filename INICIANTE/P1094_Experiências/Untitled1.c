#include <stdio.h>

int main(){



    int N,I,quantia,qc=0,qr=0,qs=0,qtot=0;
    double percc,percr,percs;
    char tipo;

    scanf("%d", &N);

    for(I=0;I<N;I++){
        scanf("%d %c", &quantia, &tipo);
        if(quantia>=1 && quantia<=15){

            switch(tipo){

                    case 'C':
                        qc = qc + quantia;
                        qtot = qtot + quantia;
                        break;

                    case 'R':
                        qr = qr + quantia;
                        qtot = qtot + quantia;
                        break;

                    case 'S':
                        qs = qs + quantia;
                        qtot = qtot + quantia;
                        break;


    }
    }
    }

    percc=((qc*100.00)/qtot);
    percr=((qr*100.00)/qtot);
    percs=((qs*100.00)/qtot);


    printf("Total: %d cobaias\n", qtot);

    printf("Total de coelhos: %d\n", qc);
    printf("Total de ratos: %d\n", qr);
    printf("Total de sapos: %d\n", qs);

    printf("Percentual de coelhos: %.2lf%%\n", percc);
    printf("Percentual de ratos: %.2lf%%\n", percr);
    printf("Percentual de sapos: %.2lf%%\n", percs);



return 0;
}
