#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int valor,um,cinco,dez,cinquenta,cem,aux,cel=0; 
	printf("Digite o valor a ser sacado\n");
	scanf("%d",&valor);
	printf("Digite o numero de notas de um\n");
	scanf("%d",&um);
	printf("Digite o numero de notas de cinco\n");
	scanf("%d",&cinco);
	printf("Digite o numero de notas de dez\n");
	scanf("%d",&dez);
	printf("Digite o numero de notas de cinquenta\n");
	scanf("%d",&cinquenta);
	printf("Digite o numero de notas de cem\n");
	scanf("%d",&cem);
	aux = (1 * um) + (5 * cinco) + (10 * dez) + (50 * cinquenta) + (cem * 100);
	
	if(aux<valor){
		printf(" Nao ha dinheiro suficiente para o saque.\n");
		return 0;
	}
		while(valor>=100 && cem>0){
			valor = valor - 100;
			cel++;
			cem--;
		}
		while(valor>=50 && cinquenta>0){
			valor = valor - 50;
			cel++;
			cinquenta--;
		}
		while(valor>=10 && dez>0){
			valor = valor - 10;
			cel++;
			dez--;
		}
		while(valor>=5 && cinco>0){
			valor = valor - 5;
			cel++;
			cinco--;
		}
		while(valor>=1 && um>0){
			valor = valor - 1;
			cel++;
			um--;
		}
	printf(" O Quantidade de cedulas foi %d", cel);
	
}
