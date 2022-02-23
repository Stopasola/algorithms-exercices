#include<stdio.h>
#include<string.h>
int main(){
	int a[10],aux,j,i;
	printf("Leia o Vetor\n");
	for(i=0;i<10;i++){	
		scanf("%d",&a[i]);
	}	
	printf("Vetor Resultante\n");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				aux= a[i];
				a[i]=a[j];
				a[j] = aux;
			}	
		}	
	}
	for(i=0;i<10;i++){	
		printf("%d ",a[i]);
	}
	return 0;
}
