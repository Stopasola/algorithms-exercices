#include<stdio.h>
#include<string.h>
int main(){
	int m[3][3],i,j,soma=0;
	printf("Leia a Matriz \n");
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){	
			scanf("%d",&m[i][j]);
		}
	}
	printf("Soma dos Elememtos acima da diagonal principal\n");
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){	
			if(i<j){
				soma += m[i][j];
			}
		}
	}
	printf("%d",soma);
	return 0;
}
