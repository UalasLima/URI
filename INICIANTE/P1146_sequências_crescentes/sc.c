#include <stdio.h>

int main(){

	int x=1,i=1;


	while(x!=0){
		scanf("%d", &x);
		if(x!=0){
			while(i<=x){
				printf("%d", i);
				if(i!=x)
					printf(" ");
				else
					if(i==x)
						printf("\n");
			i++;
			}
		}
	i=1;
	}


return 0;
}
