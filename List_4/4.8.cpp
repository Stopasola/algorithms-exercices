#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct mercado{
	char nome[15];
	char setor[15];
	int quant;
	float preco;
}estoque[100];
int main(){
	int op,cont=0,i;
	float precoT=0;
	char setor[15];
	while(op != 4){
	printf("Escolha uma opcao\n");
	printf("1-Prencher os dados do produto\n");
    printf("2-Verificar quantos produtos tem em determinado setor\n");
	printf("3-Preco total dos produtos do mercado\n");
	printf("4-Sair\n");
	scanf("%d",&op);
	if(op==1){
		for(i=0;i<100;i++){
		printf("Escreva o nome do produto\n");
		fflush(stdin);
		gets(estoque[i].nome);
		printf("Escreva o setor do produto\n");
		fflush(stdin);
		gets(estoque[i].setor);
		printf("Escreva a quantidade desse produto\n");
		scanf("%d",&estoque[i].quant);
		printf("Escreva o preco do produto\n");
		scanf("%f",&estoque[i].preco);
		}
		system("Pause");
		system("cls");
	}
	if(op==2){
		printf("Digite um setor\n");
		gets(setor);
		for(i=0;i<100;i++){
			if(strcmp(setor,estoque[i].setor) == 0){
				cont++;
			}
		}
		printf("Existem %d produtos nesse setor\n",cont);
		cont=0;
		system("Pause");
		system("cls");
	}
	if(op==3){

		for(i=0;i<100;i++){
			precoT += estoque[i].quant * estoque[i].preco;
		}
		printf("O capital investido em produtos eh %d \n",precoT);
		system("Pause");
		system("cls");	
	}
	}
		return 0;
}	
