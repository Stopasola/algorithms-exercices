#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int m[5][5],vp[5],vs[5],i,j,x=0,y=0,cont;
	printf("Leia a Matriz \n");
	for(i=0;i<5;i++){	
		for(j=0;j<5;j++){	
			m[i][j] = rand()%10;
			if(i==j){
				vp[i] = m[i][j];
			}
			if(i+j == 4){
				vs[i] = m[i][j];
			}
		}
	}
	
	printf("Mat original\n");
	for(i=0;i<5;i++){	
		for(j=0;j<5;j++){
			printf(" %d ",m[i][j]);	
		}
		printf("\n");
	}
	printf("\nMat Modificada\n");
	for(i=0;i<5;i++){	
		for(j=0;j<5;j++){
			if(i==j){
				m[i][j] = vs[i];
			}
			if(i+j == 4){
				m[i][j] = vp[i];
			}
			printf(" %d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}