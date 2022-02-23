#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[3][3],i,j,soma1=0,soma2=0,soma3=0,soma4=0,soma5=0,soma6=0,soma7=0,soma8=0,soma9=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",A[i][j]);
		}printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
				soma1+=A[i][j];
			}
			if(i==1){
				soma2+=A[i][j];
			}
			if(i==2){
				soma3+=A[i][j];
			}
		}
	}
	if(soma1 != soma2 || soma2!=soma3){
		printf("Nao eh magico");
		return 0;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j==0){
				soma4+=A[i][j];
			}
			if(j==1){
				soma5+=A[i][j];
			}
			if(j==2){
				soma6+=A[i][j];
			}
		}
	}
	if(soma3 != soma4 || soma4!=soma5 || soma5!=soma6){
		printf("Nao eh magico");
		return 0;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j==i){
				soma7+=A[i][j];
			}
			if(i+j==2){
				soma8+=A[i][j];
			}
		}
	}
	if(soma6 != soma7 || soma7!=soma8){
		printf("Nao eh magico");
		return 0;
	}else{
		printf("Eh magico");
	}
	return 0;
}
