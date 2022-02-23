#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float num,har=0,aux=1,fix=1;
	printf("Escreva um numero:\n");
	scanf("%f",&num);
	while(aux<=num){
		har += fix/aux;
		aux++;
	}
	printf("%f",har);
	return 0;
}