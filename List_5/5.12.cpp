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
  	int n, fatorial,p,NsubPfat,Nfat,Pfat,aux,denominador,combinacao;
  	printf("Entre o valor de n:(Maior numero)");
  	scanf("%d", &n);
  	printf("Entre o valor de p:(Menor numero)");
  	scanf("%d", &p);
  	Nfat = Fat(n);
  	Pfat = Fat(p);
  	aux = n-p;
  	NsubPfat = Fat(aux);
  	denominador = (Pfat * NsubPfat);
  	combinacao = Nfat / denominador;
 	printf("Combinacao de %d,%d = %d\n",n,p,combinacao);

  return 0;
}
