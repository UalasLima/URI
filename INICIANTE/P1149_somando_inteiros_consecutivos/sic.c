#include <stdio.h>

int main(){

	int a,n,soma=0,i;
	
	scanf("%d %d", &a,&n);
	while(n<1)
		scanf("%d", &n);

	for(i=0;i<n;i++){
		soma+=a;
		a++;
	}
	printf("%d\n", soma);



return 0;
}
