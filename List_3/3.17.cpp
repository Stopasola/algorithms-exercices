#include<stdio.h>
int busca(int vet[], int v, int x){
	int i;
	for(i=0;i<v;i++){
		if(x==vet[i]){
			return 1;
		}
	}
	return 0;
}

int main ()
{
	int x,resul,v,i; 
	printf("Escreva x\n");
	scanf("%d",&x);
	printf("Escreva o numero de elementos do vetor\n");
	scanf("%d",&v);
	int vet[v];
	printf("Escreva os elementos do vetor\n");
	for(i=0;i<v;i++){
		scanf("%d",&vet[i]);
	}
	resul = busca(vet,v,x);
	printf("%d",resul);
}
