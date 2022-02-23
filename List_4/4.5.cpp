#include<stdio.h>
int mdc(int x,int y){
	if(x == y){
		return x;
	}
	if(x>y){
		return mdc(x-y,y);
	}
	if(y>x){
		return mdc(x,y-x);
	}
}
int main(){
	int x,y;
	printf("Escreva x\n");
	scanf("%d",&x);
	printf("Escreva y\n");
	scanf("%d",&y);
	printf("%d",mdc(x,y));
	return 0;
}
