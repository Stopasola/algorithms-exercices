#include<stdio.h>
struct notas{
	char nome[30];
	float nota1;
	float nota2;
	float media;
}vet[3];
int main()
{		
	FILE *file;
	int i=1;
	file = fopen("textoEx7.txt","a");
	if(file==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	} 	
	for(i=1;i<=3;i++){
		printf("Escreva o nome do aluno:\n");
		fflush(stdin);
		gets(vet[i].nome);
		fflush(stdin);
		printf("Escreva a nota1 do aluno:\n");
		scanf("%f",&vet[i].nota1);
		printf("Escreva a nota2 do aluno:\n");
		scanf("%f",&vet[i].nota2);
		vet[i].media = (vet[i].nota1 + vet[i].nota2)/2;
		fprintf(file,"\t\t------Aluno %d------\t\t\n\n",i);
		fprintf(file,"%s\n",vet[i].nome);
		fprintf(file,"%.2f\n",vet[i].nota1);
		fprintf(file,"%.2f\n",vet[i].nota2);
		fprintf(file,"%.2f\n",vet[i].media);
	}
	fclose(file);
	return 0;
}
