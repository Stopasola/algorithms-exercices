#include <stdio.h>
int fibo(int num){
	if(num==1 || num==2){
		return 1;
	}
	else{
		return fibo(num-1) + fibo(num-2);
	}
}
int main(){
	int num,resul;
	printf("Escreva n\n");
	scanf("%d",&num);
	resul = fibo(num);
	printf("O valor eh %d\n",resul);
}
