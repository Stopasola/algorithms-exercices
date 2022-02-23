#include<stdio.h>
int main()
{
	int vet[100],aux=0;
	printf("Escreva 100 valores\n");
	for(i=0;i<100;i++){
		scanf("%d",&vet[i]);
	}
	for(i=0;i<100;i++){
		if(vet[i]==30){
			printf("Tem um valor igual a 30 na posicao %d",i);
			aux++;
		}
	}
	if(aux==0){
		printf("N tem valores iguais a 30 no vetor");
	}
	return 0;
	
}
