#include<stdio.h>
int main()
{
	int i,grao=1,total=1,tot=0,num=8,aux=1;
	while(num>0){
		for(i=0;i<8;i++){
			tot +=total;
			total = grao + grao;
			grao = total;	
		}
		num--;
		aux = aux * 2;
		total=aux;
		grao=total;
	}
	printf("%d",tot);
	return 0;
}