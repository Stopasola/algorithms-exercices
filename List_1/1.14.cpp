#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int	distancia;
	float combustivel,media;
	printf("Escreva a distancia percorrida\n");
	scanf("%d",&distancia);
	printf("Escreva o total de combustivel gasto*Uma casa depois da virgula*\n");
	scanf("%f",&combustivel);
	media = distancia/combustivel;
	printf("O consumo medio do automovel eh %.3f km/l \n",media);
	
	
	return 0;
}