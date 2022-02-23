#include<stdio.h>
#include<string.h>
int main(){
	int a[10],num,i;
	printf("Leia o Vetor\n");
	for(i=0;i<10;i++){	
		scanf("%d",&a[i]);
	}
	printf("Leia o numero\n");	
	scanf("%d",&num);
	printf("Vetor Resultante\n");
	for(i=0;i<10;i++){
		a[i] = a[i] * num;	
		printf("%d ",a[i]);
	}
	return 0;
}
