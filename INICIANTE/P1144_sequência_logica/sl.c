#include <stdio.h>

int main(){

	int n,i,j,k;
	i=1,j=1,k=1;

	scanf("%d", &n);

	

	while((n*2)>0){
		if(j<2){
			printf("%d %d %d\n", i,j,k);
			j++;
			k++;
			printf("%d %d %d\n", i, j,k);
		}
		else
			if(j>=2){
				i++;
				j=i*i;
				k=i*j;	
				printf("%d %d %d\n", i, j,k);
				j++;
				k++;
				printf("%d %d %d\n", i, j,k);
			}
	n--;
	}



return 0;
}
