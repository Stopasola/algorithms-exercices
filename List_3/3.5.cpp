#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
//usar vetor
int main(){
	int m[4][4],vetl[4],vetc[4],i,j,x,y,cont=0;
	printf("Leia a Matriz \n");
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){	
			m[i][j] = rand()%13;
			vetl[j] = m[0][j];
			vetc[i] = m[i][3]; 
		}
	}
	printf("\nMat original\n");
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){
			printf(" %d ",m[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){
			m[0][j] = vetc[j];
			m[i][3] = vetl[i];	
		}
	}
	printf("\nMat modificada\n");
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){
			printf(" %d ",m[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
