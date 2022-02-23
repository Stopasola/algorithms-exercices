#include<stdio.h>

int Dec2bin(int num){
	if (num == 0){
        return 0;
    }
    else{
        return (num%2 + 10*Dec2bin(num/2));
    }
}
int main(){
	int num;
	scanf("%d",&num);
	printf("%d",Dec2bin(num));
	return 0;
}
