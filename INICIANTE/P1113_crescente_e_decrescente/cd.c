#include <stdio.h>


int main(){
	int x,y;

	scanf("%d%d", &x,&y);
	if(x!=y){
		if(x>y)
			printf("Decrescente\n");
		else
			printf("Crescente\n");

	}
	

	while(x!=y){
		scanf("%d%d", &x,&y);
		if(x!=y){
			if(x>y)
				printf("Decrescente\n");
			else
				printf("Crescente\n");

		}
	}




return 0;
}
