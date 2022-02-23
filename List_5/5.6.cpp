#include<stdio.h>
#include<stdlib.h>
int soma(int A[5][5]){
	int x=0,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			x += A[i][j];
		}
	}
	return x;
}
int main()
{
	int A[5][5],Smat,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&A[i][j]);
		}
	}
	Smat = soma(A);
	printf("%d  ",Smat);	
	return 0;
}
