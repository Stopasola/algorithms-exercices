#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[100],num,i;
	printf("Vetor Resultante\n");
	for(i=0;i<100;i++){	
		a[i] = rand() % 100;
		printf("%d \n",a[i]);
	}
	return 0;
}
