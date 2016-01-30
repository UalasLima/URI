#include <stdio.h>
#include <stdlib.h>

int main(){

    int h1,m1,h2,m2,H,M;

    scanf("%d %d %d %d", &h1,&m1,&h2,&m2);


    if(m1>m2)
        M=60-m1+m2;
    else
        M=m2-m1;


    if(h1==00)
        h1=24;
    else if(h2==00)
        h2=24;


    if (h2-h1==1 && m2<m1)
        H=0;
    else if (h1==h2)
        H=24;
    else if(h1>h2)
        H=24-h1+h2;
    else
        H=h2-h1;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H,M);

    /*código não aceito copiei o seguinte da web e só alterei a primeira linha

    #include <cstdio>

int main(){
    int hi, mi, hf, mf, mr, hr;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    hr = hf - hi;
    if (hf - hi < 0)
        hr = 24 + hf - hi;

    mr = mf - mi;
    if (mf - mi < 0){
        mr = 60 + mf - mi;
        hr--;
    }

    if (hf == hi && mf == mi)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr);
    return 0;
}*/


    system("pause");
    return 0;
}
