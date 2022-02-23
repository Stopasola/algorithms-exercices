#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int m[20][20],i,j,x,cont=0;
	printf("Leia a Matriz \n");
	for(i=0;i<20;i++){	
		for(j=0;j<20;j++){	
			m[i][j] = rand()%100;
		}
	}
	printf("Leia X \n");
	scanf("%d", &x);
	for(i=0;i<20;i++){	
		for(j=0;j<20;j++){
			printf(" %d ",m[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<20;i++){	
		for(j=0;j<20;j++){	
			if(m[i][j]==x){
				printf("Foi encontrado na linha %d e na coluna %d",i,j);
				cont++;
			}
		}
	}
	if(cont=0){
	printf("N foi encontrado");
	}	
	return 0;
}
