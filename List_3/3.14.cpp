#include<stdio.h>
int inverte(int num){
	
	int aux, num2=0, f;
	aux = num;
	while(aux>0)
	{
	f = aux % 10;
	num2 = 10*num2+f;
	aux = (int) aux/10;
	}
	if(num2 == num){
		return 1;	
	}
	else{
		return 0;	
	}
}

int main ()
{
	int num,resul; 
	printf("Escreva um numero\n");
	scanf("%d",&num);
	resul = inverte(num);
		printf("%d",resul);	
	
}
