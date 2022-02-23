#include<stdio.h>
#include<stdlib.h>

typedef struct al {
char nome[30];
float media;
int faltas;
}aluno;

int main(){

	int num,total=0,i,aux,armazena;
	float maior=0;
	aluno *vet;
	printf("Escreva o numero de alunos:\n");
	scanf("%d",&num);
	vet = (aluno*)malloc(num * sizeof(aluno));

	for(i=0;i<num;i++){
		printf("Aluno %d\n",i+1);
		printf("Nome:\n");
		fflush(stdin);
		gets(vet[i].nome);
		fflush(stdin);
		printf("Media:\n");
		scanf("%f",&vet[i].media);
		printf("faltas:\n");
		scanf("%d",&vet[i].faltas);
	}
	aux=num;
	do{
		for(i=0;i<num;i++){
			if(vet[i].media>maior){
				maior=vet[i].media;
				armazena = i;
			}
		}
		printf("\n\nAluno %d\n",armazena+1);
		printf("Nome: %s\n",vet[armazena].nome);
		printf("Media: %f\n",vet[armazena].media);
		printf("faltas: %d\n",vet[armazena].faltas);
		aux--;
		vet[armazena].media = 0;
		maior=0;
	}while(aux!=0);


	return 0;
}