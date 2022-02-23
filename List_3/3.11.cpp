#include<stdio.h>
int pote(int base, int expoente){
	
	int tot,aux=1;
	tot=base;
	while(aux<expoente){
		tot = tot * base;
		aux++;  
	}
	return tot;
}
int main ()
{
	int base,expoente,resul; 
	printf("Escreva a base\n");
	scanf("%d",&base);
	printf("Escreva a base\n");
	scanf("%d",&expoente);
	resul = pote(base,expoente);
	printf("%d",resul);
}
