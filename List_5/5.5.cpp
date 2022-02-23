#include<stdio.h>
#include<stdlib.h>
int vet[500],i;
int promo(int A[]){
	for(i=0;i<500;i++){
		vet[i] = ((int)A[i]/15);
	}
	return vet[500];
}
int main()
{
	int A[500];
	for(i=0;i<500;i++){
		A[i] =  rand()% 50;
	}
	promo(A);
	for(i=0;i<500;i++){
		printf("%d  ",vet[i]);	
	}	
	return 0;
}
