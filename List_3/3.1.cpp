#include<stdio.h>
int main()
{
	int vet[12],x,y,i,j,tot=0;
	printf("Escreva X\n");
	scanf("%d",&x);
	printf("Escreva Y\n");
	scanf("%d",&y);
	printf("Escreva os valores do vetor\n");
	for(i=0;i<12;i++){
		scanf("%d",&vet[i]);
		if(x==i){
			tot+= vet[i];
		}
		if(y==i){
			tot+= vet[i];
		}	
	}
	for(i=0;i<12;i++){
		printf("%d ",vet[i]);
	}
	printf("\nO valor da soma de X e Y eh %d",tot);
	return 0;
}

