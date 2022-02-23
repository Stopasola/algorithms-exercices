#include<stdio.h>
int main()
{
	int vet2[10],vet[10],aux=0,i;
	printf("Escreva o vetor 1:\n");
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
		vet2[i]=0;
		vet2[i]=vet[i];
	}
	printf("Vetor 2:\n");
	for(i=0;i<10;i++){
		printf("%d ",vet2[i]);
	}
	return 0;
}