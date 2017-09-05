#include <stdio.h>

int main(){
	int m,n,aux=0;


	scanf("%d%d", &m,&n);
	if(m>0 && n>0){
		if(m>n){
				for(n=n;n<=m;n++){
					printf("%d ", n);
					aux=aux+n;
				}
			}
			else
				if(m<n){
					for(m=m;m<=n;m++){
						printf("%d ", m);
						aux=aux+m;
					}
			}
			else
				aux=n;
	
	    printf("Sum=%d\n", aux);
	    aux=0;
	}



	while(m>0 && n>0){
		scanf("%i%i", &m,&n);
		if(m>0 && n>0){
			if(m>n){
				for(n=n;n<=m;n++){
					printf("%d ", n);
					aux=aux+n;
				}
			}
				else
					if(m<n){
						for(m=m;m<=n;m++){
							printf("%d ", m);
							aux=aux+m;
						}
				}
				else
					aux=n;
		
	    	printf("Sum=%d\n", aux);
	    	aux=0;
		}
	}



return 0;
}
