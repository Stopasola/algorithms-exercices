#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include <string.h>
int main(){
	
	char ch,var,lido[10],escrito[10],aux[500],vet[500];
	int cont=0,i=0;

	FILE* file;	
	file = fopen("ex15r.txt","r");
	FILE* file2;	
	file2 = fopen("ex15w.txt","w");
    int tamanho;
    char texto[1000], c;
    while((c = fgetc(file)) != EOF){
        texto[i] = c;
        i++;
        cont++;
    }
    
	for(i=cont-1; i>=0; i--){
        fprintf(file2, "%c", texto[i]);
    }
	return 0;
}
