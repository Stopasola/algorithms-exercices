#include<stdio.h>
int main(){
	
	char ch;
	FILE* file;	
	file = fopen("arq.txt","w");
	if(file == NULL){
		printf("Erro\n");
	}
	else{
		do{
			printf("Digite o caractere:\n");
			fflush(stdin);
			scanf("%c",&ch);
			fflush(stdin);
			fputc(ch,file);
			//printf("%c\n",ch);
		}while(ch != '0');
		fclose(file);
		file = fopen("arq.txt","r");
		while((ch=fgetc(file))!=EOF){
			printf("%c\n",ch);
		}
	}
	fclose(file);
	return 0;
}

