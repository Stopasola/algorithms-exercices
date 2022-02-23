#include<stdio.h>
#include<string.h>
#include<stdlib.h>
float soma()
{
	float num1,num2,resul;
	printf("Escreva o primeiro numero a ser somado\n");
	scanf("%f",&num1);
	printf("Escreva o segundo numero a ser somado\n");
	scanf("%f",&num2);
	resul = num1 + num2;
	return resul;
}
float subtracao()
{
	float num1,num2,resul;
	printf("Escreva o primeiro numero a ser somado\n");
	scanf("%f",&num1);
	printf("Escreva o segundo numero a ser somado\n");
	scanf("%f",&num2);
	resul = num1 - num2;
	return resul;
}
float multiplicacao()
{
	float num1,num2,resul;
	printf("Escreva o primeiro numero a ser somado\n");
	scanf("%f",&num1);
	printf("Escreva o segundo numero a ser somado\n");
	scanf("%f",&num2);
	resul = num1 * num2;
	return resul;
}
float divisao()
{
	float num1,num2,resul;
	printf("Escreva o primeiro numero a ser somado\n");
	scanf("%f",&num1);
	printf("Escreva o segundo numero a ser somado\n");
	scanf("%f",&num2);
	resul = num1 / num2;
	return resul;
}
int main(){
	float resul;
	int op;
		while(3){
			printf("Escolha uma opcao\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-sair do programa\n");
			scanf("%d",&op);
			switch (op){
				case 1:
				resul = soma();
				printf("O Resultado eh %f",resul);
				break;
				case 2:
				resul = subtracao();
				printf("O Resultado eh %f",resul);
				break;
				case 3:
				resul = multiplicacao();
				printf("O Resultado eh %f",resul);
				break;
				case 4:
				resul = divisao();
				printf("O Resultado eh %f",resul);
				break;
				case 5:
					return 0;
			}
		}
	return 0;
}
