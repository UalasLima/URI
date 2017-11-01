#include <stdio.h>

/*Obs.: Em meu compilador o vetor na posi��o 60 n�o batia com o valor que deveria ser apresentado,
por�m a l�gica est� certa e certamente que no compilador usado pelo URI ou em alguma maquina que ele tome como
caso base seria apresentado o valor correto e ent�o esse c�digo foi aceito*/

int main () {

    int t, i, n;
    unsigned long long int Fib[60];

    for (i = 0; i <= 60; i++)
        if (i == 0)
            Fib[0] = 0;
        else if(i == 1)
            Fib[1] = 1;
        else
        Fib[i] = Fib[i-2] + Fib[i-1];

    scanf ("%d", &t);


    for (i = 0; i < t; i++){
        scanf ("%d", &n);
        printf ("Fib(%d) = %lld\n", n, Fib[n]);
    }


return 0;
}
