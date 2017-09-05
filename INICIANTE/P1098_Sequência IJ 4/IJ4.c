#include <stdio.h>

int main(){
	double i,j;

	for(i=0.0;i<0.2;i=i+0.2){
		for(j=1;j<=3;j++)
			printf("I=%.0lf J=%.0lf\n", i,j);
		}
	
	for(i;i<0.4;i=i+0.2){
		for(j=1.2;j<=3.2;j++)
			printf("I=%.1lf J=%.1lf\n", i,j);
		}

	for(i;i<0.6;i=i+0.2){
		for(j=1.4;j<=3.4;j++)
			printf("I=%.1lf J=%.1lf\n", i,j);
		}

	for(i;i<0.8;i=i+0.2){
		for(j=1.6;j<=3.6;j++)
			printf("I=%.1lf J=%.1lf\n", i,j);
		}

	for(i;i<1;i=i+0.2){
		for(j=1.8;j<=3.8;j++)
			printf("I=%.1lf J=%.1lf\n", i,j);
		}

	for(i;i<1.2;i=i+0.2){
		for(j=2;j<=4;j++)
			printf("I=%.0lf J=%.0lf\n", i,j);
		}

	for(i;i<1.4;i=i+0.2){
		for(j=2.2;j<=4.2;j++)
			printf("I=%.1lf J=%.1lf\n", i,j);
		}
	
	for(i=1.4;i==1.4;i=i+0.2){
		for(j=2.4;j<=4.4;j++)
		printf("I=%.1lf J=%.1lf\n", i,j);
	}

	for(i=1.6;i==1.6;i=i+0.2){
		for(j=2.6;j<=4.6;j++)
		printf("I=%.1lf J=%.1lf\n", i,j);
	}

	for(i=1.8;i==1.8;i=i+0.2){
		for(j=2.8;j<=4.8;j++)
		printf("I=%.1lf J=%.1lf\n", i,j);
	}

	for(i=2;i==2;i=i+0.2){
		for(j=3;j<=5;j++)
		printf("I=%.0lf J=%.0lf\n", i,j);
	}
printf("%lf\n", i);
	


return 0;
}
