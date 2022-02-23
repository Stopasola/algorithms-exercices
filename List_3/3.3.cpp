#include<stdio.h>
int main()
{
	int vet[16],vetp[8],vetu[8],i,j=0;
	printf("Escreva os valores do vetor\n");
	for(i=0;i<16;i++){
		scanf("%d",&vet[i]);
		if(i<8){
			vetp[i] = vet[i];
		}
		if(i>=8){
			vetu[j] = vet[i];
			j++;
		}	
	}
	j=0;
	for(i=0;i<16;i++){
		if(i<8){
			vet[i] = vetu[i];
		}
		if(i>=8){
			vet[i] = vetp[j];
			j++;
		}
		printf("%d ",vet[i]);
	}
	return 0;
}
