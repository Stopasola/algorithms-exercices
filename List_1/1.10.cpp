
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int ini,final,soma=0;
	printf("Escreva o valor inicial:\n");
	scanf("%d",&ini);
	printf("Escreva o valor final:\n");
	scanf("%d",&final);
	if(final<ini){
		printf("Intervalo de valores invalido\n");
		return 0;
	}
	while(ini<=final){
		if(ini%2 != 0){
			soma += ini;
		}
		ini++;
	}
	printf("A soma eh %d\n",soma);
	return 0;
}