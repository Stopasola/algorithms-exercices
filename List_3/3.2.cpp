#include<stdio.h>
int main()
{
	int vet[10],x=1,i=0,j,tot=0;
	while(i<10){
		if(x%2 != 0){
			vet[i] = x;
			i++;
		}
		x++;		
	}
	for(i=0;i<10;i++){
		printf("%d ",vet[i]);
	}
	return 0;
}

