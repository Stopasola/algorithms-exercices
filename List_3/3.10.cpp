#include<stdio.h>
#include<string.h>
#include<stdlib.h>
float fatorial(float aux){
	float fat;
	for(fat=1;aux>1;aux = aux-1 )
	fat = fat * aux;
	return fat;
}
float soma(float n)
{
	//printf("Entrou\n");
	//1 + 1 + 0,5 + 0,166 + 0,04166
	float aux=1,S=1,fat;
	while(aux<=n){
		fat = fatorial(aux);
		S += 1/fat;
		//printf("S = %f\n",fat);
		aux++;
	}
	return S;
}
int main(){
	float resul,n;
	printf("Escreva o valor de N\n");
	scanf("%f",&n);
	resul = soma(n);
	printf("O valor de S eh %f \n",resul);	
	return 0;
}
