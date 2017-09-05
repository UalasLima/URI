#include <stdio.h>

int main(){
	int n,x,y,i,aux=0;


	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%i%i", &x,&y);
		if(x>y){
			for(x=x-1;x>y;x--){
				if(x%2!=0)
					aux=aux+x;
			}
		}
		else
			if(x<y){
				for(x=x+1;x<y;x++){
					if(x%2!=0)
						aux=aux+x;
				}
		}
		else
			aux=0;

    printf("%d\n", aux);
    aux=0;
	}



return 0;
}
