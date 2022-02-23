#include<stdio.h>
void mes(int num){
	
	switch(num){
		case 1:
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
		case 3:
			printf("Mar�o\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Otubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf("Op invalida\n");
			break;
	}
}
int main ()
{
	int num; 
	printf("Escreva um numero\n");
	scanf("%d",&num);
	mes(num);
	return 0;
}