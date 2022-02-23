#include<stdio.h>
#include<string.h>
int main(){
	float a[10],b[10],d[10],aux=0,resul;
	int i,j;
	char c[10];
	printf("Leia o Vetor A \n");
	for(i=0;i<10;i++){	
		scanf("%f",&a[i]);
	}
	printf("Leia o Vetor B\n");
	for(i=0;i<10;i++){	
		scanf("%f",&b[i]);
	}
	printf("Leia as operacoes do Vetor C\n");
	for(i=0;i<10;i++){	
		scanf("%s",&c[i]);
	}
	for(i=0;i<10;i++){	
		if(c[i] == '+'){
			resul = a[i] + b[i];
			printf("O resultado eh %f\n",resul);
		}
		if(c[i] == '-'){
			resul = a[i] - b[i];
			printf("O resultado eh %f\n",resul);
		}
		if(c[i] == '*'){
			resul = a[i] * b[i];
			printf("O resultado eh %f\n",resul);
		}
		if(c[i] == '/'){
			resul = a[i] / b[i];
			printf("O resultado eh %f\n",resul);
		}
	}
	return 0;
}