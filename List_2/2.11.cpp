#include<stdio.h>
#include<string.h>
int main(){
	int num,i,j;
	printf("Escreva a dimensao das matrizes\n");
	scanf("%d",&num);
	int ma[num][num],mb[num][num],ms[num][num];
	printf("Leia a Matriz A\n");
	for(i=0;i<num;i++){	
		for(j=0;j<num;j++){	
			scanf("%d",&ma[i][j]);
		}
	}
	printf("Leia a Matriz B\n");
	for(i=0;i<num;i++){	
		for(j=0;j<num;j++){	
			scanf("%d",&mb[i][j]);
		}
	}
	printf("Matriz soma\n");
	for(i=0;i<num;i++){	
		for(j=0;j<num;j++){	
			ms[i][j] = ma[i][j] + mb[i][j];
			printf("%d ",ms[i][j]);		 
		}
		printf("\n");
	}
	return 0;
}
