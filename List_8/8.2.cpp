#include<stdio.h>
int main()
{
    int A=90000000,B=200000000,ano=0,pa,pb;
    while(A<=B)
    {
    	pa = (A/100) * 3;
    	pb = (B/100) * 1,5;
		A = A + pa;
     	B = B + pb;
     	ano++;
    }
    printf("%d",ano);
    return 0;
}

