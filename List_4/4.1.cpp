#include<stdio.h>
int A(int m,int n){
	if(m==0){
		return n+1;
	}
	else if(m>0 && n==0){
		return A(m-1,1);
	}
	else if(m>0 && n>0){
		return A(m-1,A(m,n-1));
	}
}
int main(){
	int n,m;
	printf("Escreva N\n");
	scanf("%d",&n);
	printf("Escreva M\n");
	scanf("%d",&m);
	printf("%d",A(m,n));
	return 0;
}
