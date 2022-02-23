#include<stdio.h>
int romano(int x){
	int y;
	y = x/10;
	x = x%10;
	if(y==1){
		printf("X");
	}
	if(y==2){
		printf("XX");
	}
	if(y==3){
		printf("XXX");
	}
	if(y==4){
		printf("XL");
	}
	if(y==5){
		printf("L");
	}
	if(x==1){
		printf("I");
	}
	if(x==2){
		printf("II");
	}
	if(x==3){
		printf("III");
	}
	if(x==4){
		printf("IV");
	}
	if(x==5){
		printf("V");
	}
	if(x==6){
		printf("VI");
	}
	if(x==7){
		printf("VII");
	}
	if(x==8){
		printf("VIII");
	}
	if(x==9){
		printf("IV");
	}
	
}

int main ()
{
	int x,y,resul; 
	printf("Escreva x\n");
	scanf("%d",&x);
	romano(x);
}
