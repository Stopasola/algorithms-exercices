#include<stdio.h>
#include <string.h>
int main()
{		
	FILE *file;
	int i=0;
	char palavra[15],texto[1000];
	file = fopen("textoEx8.txt","r");
	if(file==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	} 	
	printf("Escreva uma palavra para procurar:\n");
	fflush(stdin);
	gets(palavra);
	fflush(stdin);
	while( fgets(texto,sizeof(texto),file) != NULL ){ 
		i++;
		if(strstr(texto,palavra)){
			printf("Linha %d: %s",i,texto);	
		}
	}
	fclose(file);
	return 0;
}
