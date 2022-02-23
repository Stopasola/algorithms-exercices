#include<stdio.h>
#include<stdlib.h>
int soma(int A[4][4]){
	int x=0,i,j,media;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i>j){
				x += A[i][j];
			}
		}
	}
	media = x/6;
	return media;
}
int main()
{
	int A[4][4],Smat,i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d  ",A[i][j]);
		}printf("\n");
	}
	Smat = soma(A);
	printf("%d  ",Smat);	
	return 0;
}
