#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float carlos=999,joao=333;
	int meses=0;
	while(carlos>joao){
		carlos = (carlos/100) * 102;
		joao = (joao/100) * 105;
		meses++;
	}
	printf("Joao demorou %d meses para passar Carlos",meses);
	return 0;
}

