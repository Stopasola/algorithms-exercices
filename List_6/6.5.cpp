#include<stdio.h>
#include<string.h>
int main()
{		
	FILE *file;
	int i,vet[100],cont=0;
	file = fopen("dados.bin","wb");
	if(file==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	} 	
	for(i=0;i<100;i++){
		vet[i]=cont;
		cont++;
	}
	fwrite(vet,sizeof(int),100,file);
	fclose(file);
	return 0;
}
/*Fa�a um programa que crie um arquivo BIN�RIO em disco, com o nome �dados.bin�,
e escreva neste arquivo em disco uma contagem que v� de 1 at� 100, com um n�mero
em cada linha.*/
