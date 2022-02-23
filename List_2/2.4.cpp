#include<stdio.h>
#include<string.h>
int main(){
	float vet[4],tot=0,media,menor=0,maior=0,cont=0;
	int i,j,aux,aux2;
	char nome[20][4];
	for(i=0;i<4;i++){

		printf("Escreva o nome:\n");
		fflush(stdin);
		gets(nome[i]);	
		fflush(stdin);
		printf("Escreva a respectiva altura:\n");
		scanf("%f",&vet[i]);
		tot += vet[i];
		if(vet[i]>maior){
			maior=vet[i];
			aux=i;
		}
		if(cont==0){
			menor=vet[i];
		}
		if(vet[i]<menor){
			menor=vet[i];
			aux2=i;
		}
		cont++;	
	}
	media = tot/4;
	printf("Pessoas com altura acima da media:\n");
	for(i=0;i<4;i++){
		if(vet[i]>media)
		printf("Nome: %s\n",nome[i]);
	}
	printf("A maior altura eh do/a %s\n",nome[aux]);
	printf("A menor altura eh do/a %s",nome[aux2]);
	return 0;
}