#include <stdio.h>

int main(){

	int x,y,aux=0;

	scanf("%d %d", &x,&y);
	
	if(x>y){
		for(y;y<=x;y++){
		if(y%13!=0)		
			aux=aux+y;
		}	
	}
	else
		if(y>x){
			for(x;x<=y;x++){
			if(x%13!=0)		
				aux=aux+x;
			}
		}
	else
		if(x%13!=0)		
			aux=aux+x;

	printf("%d\n", aux);
		


return 0;
}
