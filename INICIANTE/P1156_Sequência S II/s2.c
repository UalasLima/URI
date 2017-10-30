#include <stdio.h>

int main() {

    double s = 1, a = 1, b = 1;

    while(a <= 39){
        a = a + 2;
        b = b * 2;
        s = s + (a / b);
    }

    printf("%.2f\n", s);


return 0;
}
