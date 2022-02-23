#include<stdio.h>
#include<stdlib.h>
int main(){
	int n1,n2,n3,n4,menor,maior,meio1,meio2; 
	printf("Digite 4 numeros\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	maior=n1;
	menor=n1;
	meio1=n1;
	meio2=n1;
	if(n2>maior){
		maior=n2;
	}
	if(n3>maior){
		maior=n3;
	}
	if(n4>maior){
		maior=n4;
	}
	if(n2<menor){
		menor=n2;
	}
	if(n3<menor){
		menor=n3;
	}
	if(n4<menor){
		menor=n4;
	}
	if(n2<maior && n2>menor){
		meio1=n2;
		meio2=n2;
		if(n1>meio2 && n1 != maior && n1 != menor)
		meio1=n1;
		if(n3>meio2 && n3 != maior && n3 != menor)
		meio1=n3;
		if(n4>meio2 && n4 != maior && n4 != menor)
		meio1=n4;
		if(n1<meio1 && n1 != maior && n1 != menor)
		meio2=n1;
		if(n3<meio1 && n3 != maior && n3 != menor)
		meio2=n3;
		if(n4<meio1 && n4 != maior && n4 != menor)
		meio2=n4;
		printf("%d, %d, %d, %d \n",maior,meio1,meio2,menor);
		return 0;
	}
	if(n3<maior && n3>menor){
		meio1=n3;
		meio2=n3;
		if(n1>meio2 && n1 != maior && n1 != menor)
		meio1=n1;
		if(n2>meio2 && n2 != maior && n2 != menor)
		meio1=n2;
		if(n4>meio2 && n4 != maior && n4 != menor)
		meio1=n4;
		if(n1<meio1 && n1 != maior && n1 != menor)
		meio2=n1;
		if(n2<meio1 && n2 != maior && n2 != menor)
		meio2=n2;
		if(n4<meio1 && n4 != maior && n4 != menor)
		meio2=n4;
		printf("%d, %d, %d, %d \n",maior,meio1,meio2,menor);
		return 0;
	}
	if(n4<maior && n4>menor){
		meio1=n4;
		meio2=n4;
		if(n1>meio2 && n1 != maior && n1 != menor)
		meio1=n1;
		if(n3>meio2 && n3 != maior && n3 != menor)
		meio1=n3;
		if(n2>meio2 && n2 != maior && n2 != menor)
		meio1=n2;
		if(n1<meio1 && n1 != maior && n1 != menor)
		meio2=n1;
		if(n3<meio1 && n3 != maior && n3 != menor)
		meio2=n3;
		if(n2<meio1 && n2 != maior && n2 != menor)
		meio2=n2;
		printf("%d, %d, %d, %d \n",maior,meio1,meio2,menor);
		return 0;
	}
}
