#include<stdio.h>
#include<string.h>
int main(){
	int i, j, la, ca, lb, cb, x;
	printf("\n Informe a quantidade de linhas da matriz A : ");
	scanf("%d",&la);
	printf("\n Informe a quantidade de colunas da matriz A : ");
	scanf("%d",&ca);
	printf("\n Informe a quantidade de linhas da matriz B : ");
	scanf("%d",&lb);
	printf("\n Informe a quantidade de colunas da matriz B : ");
	scanf("%d",&cb);
	int ma[la][ca],mb[lb][cb],mc[la][cb],aux=0;
	if(ca!=lb){
		printf("N eh possivel multiplicar\n");
		return 0;
	}
	printf("Leia a Matriz A\n");
	for(i=0;i<la;i++){	
		for(j=0;j<ca;j++){	
			scanf("%d",&ma[i][j]);
		}
	}
	printf("Leia a Matriz B\n");
	for(i=0;i<lb;i++){	
		for(j=0;j<cb;j++){	
			scanf("%d",&mb[i][j]);
		}
	}
	printf("Matriz multiplicacao\n");
	for(i=0;i<la;i++){	
		for(j=0;j<cb;j++){
			mc[i][j]=0;
			for(x=0;x<lb;x++){
				aux += ma[i][x] * mb[x][j];
			}
			mc[i][j] = aux;
			aux=0; 
		}
	}
	for(i=0;i<la;i++){	
		for(j=0;j<lb;j++){	
			printf(" %d ",mc[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
