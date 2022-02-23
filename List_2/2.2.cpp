#include<stdio.h>
int main()
{
	int vet[10],aux=0,i;
	printf("Escreva 100 valores\n");
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
		aux += vet[i];
	}
	printf("O somatorio eh %d",aux);
	return 0;
	
}
