#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float valorT,pres,resul,juro; 
	printf("Digite o valor total da conta\n");
	scanf("%f",&valorT);
	printf("Digite o numero de prestacoes *Acima de 12*\n");
	scanf("%f",&pres);
	while(pres<12){
		printf("Valor incorreto, insira um valor maior ou igual a 12\n");
		scanf("%f",pres);
	}
	if(pres<24){
		resul = valorT/pres;
		printf("O Valor de cada prestacao eh %.1f",resul);
	}
	if(pres>=24 && pres<36){
		juro = valorT/10;
		resul= (valorT+juro)/pres;
		printf("O Valor de cada prestacao eh %.1f",resul);
	}
	if(pres>=36){
		juro = (valorT/10)* 1.5;
		resul= (valorT+juro)/pres;
		printf("O Valor de cada prestacao eh %.1f",resul);
	}
	return 0;

	
	
}
