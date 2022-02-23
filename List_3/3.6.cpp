#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int m[8][8],i,j,x,cont=0;
	printf("Leia a Matriz \n");
	for(i=0;i<8;i++){	
		for(j=0;j<8;j++){	
			m[i][j] = rand()%10;
		}
	}
	printf("Mat original\n");
	for(i=0;i<8;i++){	
		for(j=0;j<8;j++){
			printf(" %d ",m[i][j]);	
		}
		printf("\n");
	}
	printf("\nMat Modificada\n");
	for(i=0;i<8;i++){	
		for(j=0;j<8;j++){
			if(i<j){
				m[i][j] = 0;
			}
			printf(" %d ",m[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
