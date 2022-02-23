#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n,*vet,total=0,i;
	float media;
	printf("Escreva um valor n \n");
	scanf("%d",&n);
	vet = (int *)malloc(n * sizeof(int));
	printf("Digite as notas\n");
	for(i=0;i<n;i++){
		printf("Nota %d\n",i);
		scanf("%d",&vet[i]);
		total+= vet[i];
	}
	printf("total eh %d\n",total);
	media = ((float)total/n);
	printf("A media eh %f",media);
	return 0;
}
