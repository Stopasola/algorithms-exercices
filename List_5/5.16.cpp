#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct carro{
	char carro[15];
	int ano;
	char cor[10];
	float preco;
}vetcarros[20];

int main(){
	int op,cont=0,ano,i;
	float preco;
	char marca[20],cor[20];
	while(op != 5){
	printf("Escolha uma op��o\n");
	printf("1-Prencher os dados de cadastro\n");
    printf("2-Digite um valor para verificar se existe carro de mesmo preco ou menor no sistema\n");
	printf("3-Leia a marca de um carro e imprima as informa��es de todos os carros dessa marca\n");
	printf("4-Leia uma marca, ano e cor e informe se existe ou n�o um carro com essas caracter�sticas\n");
	printf("5-Sair\n");
	scanf("%d",&op);
	if(op==1){
		for(i=0;i<20;i++){
		printf("Escreva o nome do carro\n");
		fflush(stdin);
		gets(vetcarros[i].carro);
		printf("Escreva o ano do carro\n");
		scanf("%d",&vetcarros[i].ano);
		printf("Escreva a cor do carro\n");
		fflush(stdin);
		gets(vetcarros[i].cor);
		printf("Escreva o preco do carro\n");
		scanf("%f",&vetcarros[i].preco);
		}
		system("Pause");
		system("cls");
	}
	if(op==2){
		printf("Digite um preco\n");
		scanf("%f",&preco);
		for(i=0;i<20;i++){
			if(preco>=vetcarros[i].preco){
				printf("%c\n",vetcarros[i].carro);
				printf("%d\n",vetcarros[i].ano);
				printf("%c\n",vetcarros[i].cor);
				printf("\n");
				cont++;
			}
		}
		if(cont==0){
			printf("N existem carros com valor igual ou menor no sitema\n");
		}
		cont=0;
		system("Pause");
		system("cls");
	}
	if(op==3){
		printf("Digite uma marca\n");
		gets(marca);
		for(i=0;i<20;i++){
			if(strcmp(marca,vetcarros[i].carro) == 0){
				printf("%f\n",vetcarros[i].preco);
				printf("%d\n",vetcarros[i].ano);
				printf("%c\n",vetcarros[i].cor);
				printf("\n");
				cont++;
			}
		}
		if(cont==0){
			printf("N existem carros dessa marca no sitema\n");
		}
		cont=0;
		system("Pause");
		system("cls");
	}
	if(op==4){
		printf("Digite uma marca\n");
		fflush(stdin);
		gets(marca);
		printf("Digite um ano\n");
		scanf("%d",&ano);
		printf("Digite uma cor\n");
		fflush(stdin);
		gets(cor);
		for(i=0;i<20;i++){
			if( strcmp(marca,vetcarros[i].carro) == 0 && (strcmp(cor,vetcarros[i].cor) == 0) && (ano==vetcarros[i].ano) ){
				printf("Existe\n");
				printf("%f\n",vetcarros[i].preco);
				cont++;
			}
		}
		if(cont==0){
			printf("N existem carros com tais especificacoes no sitema\n");
		}
		system("Pause");
		system("cls");
	}
	}
		return 0;
}	
