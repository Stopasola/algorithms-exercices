#include<stdio.h>
int comb(int n,int k){
	if(k==1){
		return n;
	}
	else if(k==n){
		return 1;
	}
	else if( 1 < k && k<n){
		return comb(n-1,k-1) + comb(n-1,k);
	}
}
int main(){
	int n,k;
	printf("Escreva N\n");
	scanf("%d",&n);
	printf("Escreva k\n");
	scanf("%d",&k);
	printf("%d",comb(n,k));
	return 0;
}
