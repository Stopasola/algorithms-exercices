#include<stdio.h>
#include<string.h>
int main(){
	int m[4][4],i,j;
	printf("Leia a Matriz \n");
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){	
			scanf("%d",&m[i][j]);
		}
	}
	printf("Elememtos da diagonal principal\n");
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){	
			if(i==j){
				printf("%d ",m[i][j]);
			}
		}
	}
	return 0;
}
