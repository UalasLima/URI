#include <stdio.h>

int main(){

	double a,b;
	int x=1;

	
	while(x==1){
		scanf("%lf", &a);
		while(a<0 || a>10){
			if(a<0 || a>0){
				printf("nota invalida\n");
				scanf("%lf", &a);
			}
		}
	
		scanf("%lf", &b);
		while(b<0 || b>10){
			if(b<0 || b>0){
				printf("nota invalida\n");
				scanf("%lf", &b);
			}
		}
		
		printf("media = %.2lf\n", (a+b)/2);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &x);
		while(x<1 || x>2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);
		}
	}


return 0;
}
