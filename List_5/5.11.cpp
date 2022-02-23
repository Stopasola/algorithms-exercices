#include <stdio.h>
int Fat(int n){
	int fatorial = 1;
	while (n > 0) {
		fatorial = fatorial *  n;
    	n--;                
  	}
  	return fatorial;
}
int main()
{
  	int n, fatorial;
  	printf("Entre o valor de n: ");
  	scanf("%d", &n);
  	fatorial = Fat(n);
 	printf("%d! = %d\n",n, fatorial);

  return 0;
}
