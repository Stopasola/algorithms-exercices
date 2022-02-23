#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,*vet,total=0,i,tamanho,soma=0;
	float media;
	printf("Escreva o tamanho do vetor \n");
	scanf("%d",&tamanho);
	vet = (int*)malloc(tamanho * sizeof(int));
	printf("Escreva os elementos do vetor \n");
	for(i=0;i<tamanho;i++){
		scanf("%d",&vet[i]);
		if(vet[i]<0){
			soma += vet[i];	
		}
	}
	printf("Os elementos do vetor sao:\n");
	for(i=0;i<tamanho;i++){
		printf("%d ",vet[i]);
	}
	printf("\n A soma dos numeros negativos eh %d \n",soma);
	return 0;
}
