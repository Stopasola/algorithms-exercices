#include<stdio.h>
int primo(int num){

	int cont=0,x=2;
	while(x<num){	
		if(num%x==0){
			cont++;;
		}
		x++;
	}
	if(cont==0){
		return 1;	
	}else{
		return 0;
	}
	
}
int main ()
{
	int num,resul; 
	printf("Escreva um numero\n");
	scanf("%d",&num);
	resul = primo(num);
	printf("%d",resul);
}
