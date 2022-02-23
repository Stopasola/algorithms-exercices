#include<stdio.h>
int main(){
	
	char ch;
	int cont=0;
	FILE* file;	
	file = fopen("ex13.txt","r");
	if(file == NULL){
		printf("Erro\n");
	}
	else{
		
		while((ch=fgetc(file))!=EOF){
			if(ch == '\n'){
				cont++;
			}
		}
		printf("%d",cont);
	}
	fclose(file);
	return 0;
}

