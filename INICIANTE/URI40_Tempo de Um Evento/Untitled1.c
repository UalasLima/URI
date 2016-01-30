#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int d,h,m,s,d1,h1,m1,s1,d2,h2,m2,s2;
    char a[3],b,c;

    scanf("%s %d", &a,&d1);
    scanf("%d %c %d %c %d", &h1,&b,&m1,&c,&s1);


    scanf("%s %d", &a,&d2);
    scanf("%d %c %d %c %d", &h2,&b,&m2,&c,&s2);


    d=d2-d1;
    h=24-h1+h2;
    if(h==24)
        h=0;
    if(h!=0)
        d=d-1;
    m=abs(m2-m1);
    s=abs(s2-s1);


    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    /*Código que foi aceito... copiado da net
    #include <cstdio>

int main(){
    int d, dd, h, hh, m, mm, s, ss;

    scanf("Dia %d", &d);
    scanf("%d : %d : %d\n", &h, &m, &s);
    scanf("Dia %d", &dd);
    scanf("%d : %d : %d", &hh, &mm, &ss);

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dd - d;

    if (s < 0){
    	s += 60;
    	m--;
    }

    if (m < 0){
    	m += 60;
    	h--;
    }

    if (h < 0){
    	h += 24;
    	d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
}*/

    system("pause");
    return 0;
}
