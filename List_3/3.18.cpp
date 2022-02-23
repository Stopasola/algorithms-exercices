#include<stdio.h>
void preenche(int * vet){
	
	int i;
	printf("Digite os elementos do vetor\n");
	for(i=0;i<5;i++){
		scanf("%d",&vet[i]);
	}
}
void mostra(int vet[], int elementos){
	int i;
	printf("\nOs elementos do vetor sao:\n");
	for(i=0;i<elementos;i++){
		printf("%d ",vet[i]);
	}
}

int main ()
{
	int i,vetA[5],vetB[5],vetC[5],elementos=5; 
	//vetA[i] = leitura(vetA,elementos);
	preenche(vetA);
	preenche(vetB);
	for(i=0;i<5;i++){
		vetC[i] = vetA[i] * vetB[i];
	}
	mostra(vetA,5);
	mostra(vetB,5);
	mostra(vetC,5);
	return 0;
	
}
