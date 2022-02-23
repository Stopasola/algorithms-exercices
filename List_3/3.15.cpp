#include<stdio.h>
int div(int x, int y){
	int cont=0,aux;
	while(x/y>1){
		cont ++;
		aux = x/y;
		//printf("--%d\n",aux);
		x = aux;	
	}
	if(cont==0){
		return -1;
	}else{
		return cont;
	}
}

int main ()
{
	int x,y,resul; 
	printf("Escreva x\n");
	scanf("%d",&x);
	printf("Escreva y\n");
	scanf("%d",&y);
	resul = div(x,y);
	printf("%d",resul);
}