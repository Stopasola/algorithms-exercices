#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int ano;
	printf("Escreva um ano:\n");
	scanf("%d",&ano);
	if(ano%400==0){
		printf("Esse ano eh bissexto\n");
		return 0;
	} 
	if(ano%4 == 0 && ano%100 != 0){
		printf("Esse ano eh bissexto\n");
		return 0;
	}
	printf("Esse ano  nao eh bissexto\n");
	return 0;
}