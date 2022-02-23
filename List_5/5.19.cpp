#include <stdio.h>
int soma(int num){
	if (num % 10 == num)
        return num;
	else{
    return ((num % 10) + soma(num / 10));
	}
}
int main(){
	int num,resul;
	printf("Escreva n\n");
	scanf("%d",&num);
	resul = soma(num);
	printf("O valor eh %d\n",resul);
}
