#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct caracteristicas{
	char sexo[1];
	char olhos[10];
	char cabelos[10];
	int idade;
}vet[50];

void leia(struct caracteristicas vet[]){
	int i;
	for(i=0;i<50;i++){
		printf("PACIENTE NUMERO %d\n",i+1);
		printf("Escreva o Sexo\n");
		fflush(stdin);
		gets(vet[i].sexo);
		printf("Escreva a cor dos olhos\n");
		fflush(stdin);
		gets(vet[i].olhos);
		printf("Escreva a cor dos cabelos\n");
		fflush(stdin);
		gets(vet[i].cabelos);
		printf("Escreva a idade\n");
		scanf("%d",&vet[i].idade);
		system("pause");
		system("cls");
	}
}
void info(struct caracteristicas vet[], int *maior,int *cont1, int *cont2){
	int i;
	for(i=0;i<50;i++){
		if(vet[i].idade > *maior){
			*maior=vet[i].idade;
		}
		if(strcmp(vet[i].sexo,"F")==0 && vet[i].idade>=18 && vet[i].idade<=35){
			*cont1++;
		}
		if(strcmp(vet[i].cabelos,"loiro")==0 && strcmp(vet[i].olhos,"verde")==0){
			*cont2++;
		}
		
	}
}

int main(){
	
	int op,maior=0,cont1=0,cont2=0;
	while(op!=3){
		printf("Escolha uma op��o\n");
		printf("1-Prencher os dados dos pacientes\n");
		printf("2-Informacoes sobre a maior idade e indiv�duos do sexo feminino cuja idade est� entre 18 e 35 (inclusive) e que tenham olhos verdes e cabelos louros\n");
		printf("3-Sair\n");
		scanf("%d",&op);
		if(op==1)
			leia(vet);	
		if(op==2){
			info(vet,&maior,&cont1,&cont2);
			printf("Maior idade %d\n",maior);
			printf("Indiv�duos do sexo feminino cuja idade est� entre 18 e 35 (inclusive) %d\n",cont1);
			printf("Individuos de que tenham olhos verdes e cabelos louros %d\n",cont2);
		}
	}
}