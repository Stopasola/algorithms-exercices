#include<stdio.h>
int main ()
{
	int vet[15],P[5],I[5],i,j=0,x,cont=0; 
	printf("Escreva os 15 elementos do vetor:\n");
	for(i=0;i<15;i++){
		scanf("%d ",&vet[i]);	
	}
	printf("Elementos do vetor:\n");
	for(i=0;i<15;i++){
		printf("%d ",vet[i]);	
	}
	i=0;
	j=0;
	printf("\nElementos do vetor P:\n");
	while(j<15){
		if(vet[j]%2==0){
			P[i] = vet[j];
			i++;
		}
		j++;
		if(i==5){
			for(x=0;x<i;x++){
				printf("%d  ",P[x]);
				P[x]=-1;
				cont++;
			}
			i=0;
		}	
	}
	if(P[0]!=-1){
		for(x=0;x<i;x++){
			printf("%d  ",P[x]);
		}
	}
	///////////////////////////////
	j=0;
	i=0;
	cont=0;
	printf("\nElementos do vetor P:\n");
	while(j<15){
		if(vet[j]%2!=0){
			I[i]=vet[j];
			i++;
		}
		j++;
		if(i==5){
			for(x=0;x<5;x++){
				printf("%d  ",I[x]);
				I[x]=-1;
				cont++;
			}
			i=0;
		}	
	}
	if(cont!=-1){
		for(x=0;x<i;x++){
			printf("%d  ",I[x]);
		}
	}
}
