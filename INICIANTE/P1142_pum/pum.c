#include <stdio.h>

int main(){

	int n, i=1,cont=1;
	
	scanf("%d", &n);

	while(cont<=n){	
		printf("%d %d %d PUM\n", i,i+1,i+2);
		i+=4;
		cont++;
	}




return 0;
}
