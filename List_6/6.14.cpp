#include<stdio.h>
#include<ctype.h>
int main(){
	
	char ch,lido[10],escrito[10];
	int cont=0;
	printf("Escreva o nome do arquivo para ser lido\n");
	fflush(stdin);
	gets(lido);
	fflush(stdin);
	printf("Escreva o nome do arquivo para ser escrito\n");
	fflush(stdin);
	gets(escrito);
	fflush(stdin);
	FILE* file;	
	file = fopen(lido,"r");
	FILE* file2;	
	file2 = fopen(escrito,"w");
	if(file == NULL || file2 == NULL){
		printf("Erro\n");
	}
	else{
		while((ch=fgetc(file))!=EOF){
			ch = toupper(ch);
			fputc(ch,file2);
		}
	}
	fclose(file);
	fclose(file2);
	return 0;
}
