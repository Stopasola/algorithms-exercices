#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 5

struct habitantes{
	char sexo[1];
	float salario;
	int nf;
	int idade;
}vet[n];

void leia(struct habitantes vet[]){
	int i;
	for(i=0;i<n;i++){
		printf("Habitante NUMERO %d\n",i+1);
		printf("Escreva o Sexo\n");
		fflush(stdin);
		gets(vet[i].sexo);
		fflush(stdin);
		printf("Escreva o salario\n");
		scanf("%f",&vet[i].salario);
		printf("Escreva o numero de filhos\n");
		scanf("%d",&vet[i].nf);		
		printf("Escreva a idade\n");
		scanf("%d",&vet[i].idade);
		system("pause");
		system("cls");
	}
}

void info(struct habitantes vet[], int *menor,int *maior,float *media, int *quant){
	int i;
	float total=0;
	for(i=0;i<n;i++){
		if(vet[i].idade > *maior){
			*maior=vet[i].idade;
		}
		if(vet[i].idade < *menor){
			*menor=vet[i].idade;
		}
		total+=vet[i].salario;	
		if(strcmp(vet[i].sexo,"f")==0 && vet[i].nf==3 && vet[i].salario<=500){
			*quant++;
		}
	}
	*media= total/n;
}

int main(){

	int op,menor=200,maior=0,quant=0;
	float media;
	while(op!=3){
		printf("Escolha uma opcao\n");
		printf("1-Prencher os dados dos pacientes\n");
		printf("2-Informacoes m�dia de sal�rio entre os habitantes, a menor e a maior idade do grupo e a quantidade de mulheres com 3 filhos que recebe at� R$500,00.\n");
		printf("3-Sair\n");
		scanf("%d",&op);
		if(op==1)
			leia(vet);	
		if(op==2){
			info(vet,&menor,&maior,&media,&quant);
			printf("Maior idade %d\n",maior);
			printf("Menor idade %d\n",menor);
			printf("Media de salario %f\n",media);
			printf("Quantidade de mulheres com 3 filhos que recebe at� R$500,00   %d\n",quant);
			system("pause");
			system("cls");
		}
	}
}