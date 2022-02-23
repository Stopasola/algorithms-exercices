#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float aux,aux2,fat=1,cont=0,E=0;
	int N;
	printf("Escreva um numero:\n");
	scanf("%d",&N);
	aux2=N;
	while(aux2>cont){
		aux=N;
		if(N==1)
		fat=1;
		while(N>1){
			N--;
			if (N > 0){
				fat = (aux * N);
				aux=fat;
			}
		}
		E += (1/fat);
		cont++;
		N=aux2-cont;
	}
	printf("O Valor de E = %f",E);
	return 0;
}
