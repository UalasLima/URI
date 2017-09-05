#include <stdio.h>

int main(){
	
	int golI,golG,sn=1,tot=0,vI=0,vG=0,e=0;

	while(sn==1){
		scanf("%d %d", &golI,&golG);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &sn);
		tot++;

		if(golI>golG)
			vI++;
		else
			if(golI<golG)
				vG++;
		else
			e++;
	}
	
	printf("%d grenais\n", tot);
	printf("Inter:%d\n", vI);
	printf("Gremio:%d\n", vG);
	printf("Empates:%d\n", e);
	if(vI>vG)
		printf("Inter venceu mais\n");
	else
		if(vI<vG)
			printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");


return 0;
}
