#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//principal pela secundaria
int main(){
	int ma[10][10],mb[10][10],i,j,x=0,y=0,ds[10],di[10],cont;
	printf("Leia a Matriz A \n");
	for(i=0;i<10;i++){	
		for(j=0;j<10;j++){	
			ma[i][j] = rand()%10;
			if(i+j == 9){
				di[i] = ma[i][j];
			}
		}
	}
	printf("Leia a Matriz B \n");
	for(i=0;i<10;i++){	
		for(j=0;j<10;j++){	
			mb[i][j] = rand()%10;
			if(i==j){
				ds[i] = mb[i][j];
			}
		}
	}
	printf("Mat original A\n");
	for(i=0;i<10;i++){	
		for(j=0;j<10;j++){
			printf(" %d ",ma[i][j]);
		}
		printf("\n");
	}
	printf("Mat original B\n");
	for(i=0;i<10;i++){	
		for(j=0;j<10;j++){
			printf(" %d ",mb[i][j]);	
		}
		printf("\n");
	}
	printf("Mat Modificada A\n");
	for(i=0;i<10;i++){	
		for(j=0;j<10;j++){
			if(i==j){
				ma[i][j] = ds[i];
			}
			printf(" %d ",ma[i][j]);
		}
		printf("\n");
	}
	/*printf("--------\n");
	for(x=0;x<10;x++){
		printf(" %d ",di[x]);
	}*/
	printf("\nMat modificada B\n");
	for(i=0;i<10;i++){	
		for(j=0;j<10;j++){
			if(i+j == 9 ){
				mb[i][j] = di[i];
			}
			printf(" %d ",mb[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}
