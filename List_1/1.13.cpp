#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int num,soma=0,cont=0,maior,menor,contp=0,somap=0,op;
	float media,mediap;
	while(666){
		printf("Escreva um numero:\n");
		scanf("%d",&num);
		soma += num;
		cont++;
		if(cont==1){
			maior=num;
			menor=num;
		}
		if(num>maior){
			maior=num;
		}
		if(num<menor){
			menor=num;
		}
		if(num%2==0){
			somap += num;
			contp++;
		}
		printf("Deseja parar de inserir numeros?\n1)Sim\n2)Nao\n");
		scanf("%d",&op);
		if(op==1){
			break;
		}	
		system("cls");
	}
	media = soma/cont;
	mediap = somap/contp;
	printf("Soma = %d\n",soma);
	printf("Quantidade = %d\n",cont);
	printf("Media = %f\n",media);
	printf("Maior = %d\n",maior);
	printf("Menor = %d\n",menor);
	printf("Media par = %f\n",mediap);
	return 0;
}
