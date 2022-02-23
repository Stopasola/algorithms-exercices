#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float s=0,num1=1,num2=1;
	while(num1<=99){
		s += num1/num2;
		num1 = num1 +2;
		num2 = num1 +1;
	}
	printf("%f",s);
	return 0;
}
