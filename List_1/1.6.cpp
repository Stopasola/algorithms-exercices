#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int num,resul=0,aux;
	printf("Escreva um numero:\n");
	scanf("%d",&num);
	aux=num-1;
	while( aux > 0 ){
		if(num%aux==0)
		resul+=aux;
		aux--; 
	}
	printf("%d",resul);
	return 0;
}
