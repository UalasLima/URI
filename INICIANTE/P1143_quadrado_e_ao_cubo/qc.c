#include <stdio.h>

int main(){

	int n, i=1,j=1,cont=1;
	
	scanf("%d", &n);

	while(i<=n){	
		j=i*i;
		printf("%d %d %d\n", i,j,i*j);
		i++;
	}




return 0;
}
