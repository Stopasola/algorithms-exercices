#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int alea,num,tent=0;
	alea = rand() % 10;
	while(66){
		printf(" Digite um numero para acertar o numero aleatorio\n");
		scanf("%d",&num);
		if(num>alea){
			printf("O numero digitado eh maior\n");
		}
		if(num<alea){
			printf("O numero digitado eh menor\n");
		}
		tent++;
		if(num==alea){
			printf("Parabens voce acertou usando %d tentativas\n",tent);
			break;
		}
		system("Pause");
		system("cls");
	}
	return 0;
}

