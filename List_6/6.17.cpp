#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include <string.h>
int main(){
	
	char ch;
	int cont=0,i,j,qpos,m,n,p1,p2;
	FILE* file;	
	file = fopen("ex17.txt","r");
	FILE* file2;	
	file2 = fopen("ex17w.txt","w");
	if(file == NULL){
		printf("Erro\n");
	}
	else{
		while((ch=fgetc(file))!=EOF){
			printf("%d \n",cont);
			if(ch == '<'){
				cont++;
			}
			if(ch == '>'){
				cont--;
				ch=fgetc(file);
			}
			if(cont==0){
	            if(ch==EOF)
	            {
	                break;
	            }
	            fputc(ch, file2);
        	}
		}
			
	}
	fclose(file);
	fclose(file2);
	return 0;
}
