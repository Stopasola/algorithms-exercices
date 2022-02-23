#include<stdio.h>
#include<string.h>
int main(){
	int a[5],b[5],s[5],i,j;
	printf("Leia o Vetor A \n");
	for(i=0;i<5;i++){	
		scanf("%d",&a[i]);
	}
	printf("Leia o Vetor B\n");
	for(i=0;i<5;i++){	
		scanf("%d",&b[i]);
		s[i] = a[i] + b [i];
	}
	printf("Vetor Soma\n");
	for(i=0;i<5;i++){	
		printf("%d ",s[i]);
	}
	return 0;
}
