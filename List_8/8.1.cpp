#include<stdio.h>
int main()
{
	int num, aux,numalt,soma;
	printf("Escreva um numero com 4 digitos:\n");
	scanf("%d",&num);
	aux = num%100;
	numalt = num/100;
	soma = numalt + aux;
	if((soma*soma)==num)
	{
		printf("Possui essa caracteristica\n");
	}
	else{
		printf(" N Possui essa caracteristica\n");
	}
	return 0;
}
