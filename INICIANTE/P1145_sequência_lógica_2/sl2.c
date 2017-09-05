#include <stdio.h>

int main(){

	int x,y,i,j=1,cont=1;
	
	scanf("%d %d", &x,&y);
	
	for(i=1;i<=y;i+=x){
		while(j<=x){
			printf("%d", cont);
			cont++;
			if(j==x)
				printf("\n");
			else
				printf(" ");
			j++;
		}
		j=1;
	}




return 0;
}
