#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int p=60,n=2;

struct ficha{
	float peso;
	int altura;
	int idade;
}vet[2];

int main(){
	int op,i;
	float media,total=0;
	while(op != 3){
	printf("Escolha uma op��o\n");
	printf("1-Prencher os dados da ficha\n");
    printf("2-Media de idade para paciente compeso menor que %d\n",p);
	printf("5-Sair\n");
	scanf("%d",&op);
	if(op==1){
		for(i=0;i<n;i++){
		printf("PACIENTE NUMERO %d\n",i+1);	
		printf("Escreva o peso do paciente\n");
		scanf("%f",&vet[i].peso);
		printf("Escreva a altura do paciente (Em centimetros)\n");
		scanf("%d",&vet[i].altura);
		printf("Escreva a idade do paciente\n");
		scanf("%d",&vet[i].idade);
		system("Pause");
		system("cls");
		}
	}
	if(op==2){
		for(i=0;i<n;i++){
			if(vet[i].peso<p){
				total+=vet[i].idade;
			}
		}
		media = total/n;
		printf("\n\n\tA Media de idade eh\n\t%f\n",media);
		system("Pause");
		system("cls");
	}
	
	}
		return 0;
}	