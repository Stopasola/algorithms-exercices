#include<stdio.h>
#include<stdlib.h>
struct data{
    int dia;
    int mes;
    int ano;
}
typedef struct
{
char nome[30];
struct data dat;
int cpf;
} pes;

void insere(pes *vet, int*num){
	int i;
		if(num>1){
		    vet = ( pes*) realloc( vet , (*num * sizeof(struct pes)));	
		}
		i = num-1;
		printf("Cadastro  %d\n",i+1);
		printf("Nome:\n");
		fflush(stdin);
		gets(vet[i].nome);
		fflush(stdin);
		printf("Data:\n");
		scanf("%d %d %d",&vet[i].dat.dia,&vet[i].dat.mes,&vet[i].dat.ano);
		printf("Cpf:\n");
		scanf("%d",&vet[i].cpf);
		*num++;
}
int main(){

	int num=1;
	int i,aux,armazena,op;
	pes *vet;
	float maior=0;
	do{
		printf("Deseja inserir um usuario?\n1-Sim\n2-Nao\n");
		scanf("%d",op);
		vet = (pes*)malloc( num  * sizeof( pes));
		insere(&vet,&num);
	}while(op!=2)


	return 0;
}
