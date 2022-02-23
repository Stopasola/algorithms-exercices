#include<stdio.h>
#include<stdlib.h>
int soma(int A[6][6]){
	int x=0,i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(i==j){
				x += A[i][j];
			}
			if(i+j==5){
				x += A[i][j];
			}
		}
	}
	return x;
}
int main()
{
	int A[6][6],Smat,diagS,i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d  ",A[i][j]);
		}printf("\n");
	}
	Smat = soma(A);
	printf("%d   ",Smat);	
	return 0;
}
