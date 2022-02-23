#include <stdio.h>
int soma(int num){
	if(num==1){
		return 1;
	}
	else{
		return num + soma(num-1);
	}
}
int main(){
	int num,resul;
	printf("Escreva n\n");
	scanf("%d",&num);
	resul = soma(num);
	printf("O valor eh %d\n",resul);
}
