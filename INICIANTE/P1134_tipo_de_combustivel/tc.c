#include <stdio.h>

int main(){

	int x,a=0,g=0,d=0;


	scanf("%d", &x);
	if(x<1 || x>4){
		while(x<1 || x>4)
			scanf("%d", &x);
	}
	if(x==1)
		a++;
	else
		if(x==2)
			g++;
	else
		if(x==3)
			d++;
		


	while(x!=4){
		scanf("%d", &x);
		if(x<1 || x>4){
			while(x<1 || x>4)
				scanf("%d", &x);
		}		

		if(x==1)
			a++;
		else
			if(x==2)
				g++;
		else
			if(x==3)
				d++;
	}


	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", a);
	printf("Gasolina: %d\n", g);
	printf("Diesel: %d\n", d);	


return 0;
}
