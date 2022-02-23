#include<stdio.h>
#include<stdlib.h>
int Max(int a,int b){
	if(a>b)
	return a;
	else{
		return b;
	}
}
int main()
{
	int op,a,b,maior,c,d,comp1,comp2,comp3; 
	while(op!=3){
		system("cls");
		printf("EScolha uma opcao:\n");
		printf("1-Fun��o Max recebe como par�metros de entrada dois n�meros inteiros e retorna o maior.\n");
		printf("2-Escreva 4 numeros\n");
		printf("3-Sair\n");
		scanf("%d",&op);
		if(op==1){
			printf("Escreva um numero inteiro A\n");
			scanf("%d",&a);
			printf("Escreva um numero inteiro B\n");
			scanf("%d",&b);
			maior = Max(a,b);
			printf("O maior eh %d\n",maior);
			system("pause");
		}
		if(op==2){
			printf("Escreva um numero inteiro A\n");
			scanf("%d",&a);
			printf("Escreva um numero inteiro B\n");
			scanf("%d",&b);
			comp1 = Max(a,b);
			printf("Escreva um numero inteiro C\n");
			scanf("%d",&c);
			printf("Escreva um numero inteiro D\n");
			scanf("%d",&d);
			comp2 = Max(c,d);
			comp3 = (comp1,comp2);
			printf("O maior eh %d\n",comp3);
			system("pause");
		}
	}	
	return 0;
}