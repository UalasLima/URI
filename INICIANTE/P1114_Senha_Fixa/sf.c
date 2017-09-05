#include <stdio.h>

int main(){
	int a=2002,b=0;

	while(a!=b){
		scanf("%d", &b);
		if(a==b)
			printf("Acesso Permitido\n");
		else
			printf("Senha Invalida\n");

	}


return 0;
}
