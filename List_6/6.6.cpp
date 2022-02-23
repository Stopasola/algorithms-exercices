#include<stdio.h>
int main()
{		
	FILE *file;
	int i=1;
	char frase[1000];
	file = fopen("textoEx6.txt","r");
	if(file==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	} 	
	while( fgets(frase,1000,file) != NULL ){
		printf("%d:%s",i,frase);
		i++;
	}
	fclose(file);
	return 0;
}
