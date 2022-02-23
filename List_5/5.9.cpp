#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
float Area(float raio){
	float x;
	x = (pi * raio )* raio;
	return x;
}
float Perimetro(float raio){
	float x;
	x = pi * (2 * raio);
	return x;
}
int main()
{
	float area,perimetro,raio;
	int op;
	printf("Escreva o raio:\n");
	scanf("%f",&raio);
	while(op!=3){
		system("cls");
		printf("EScolha uma opcao:\n");
		printf("1-Calcular area\n");
		printf("2-Calcular perimetro\n");
		printf("3-Sair\n");
		scanf("%d",&op);
		if(op==1){
			area = Area(raio);
			printf("%f\n",area);
			system("pause");
		}
		if(op==2){
			perimetro = Perimetro(raio);
			printf("%f\n",perimetro);
			system("pause");
		}
	}
	return 0;
}