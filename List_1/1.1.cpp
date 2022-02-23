#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int media=120,aumento=0, aux, mediai;
	float inicial=5.0, final=1.0, desconto=0, sessao=0, maiorL=0, iniciali;

	while(inicial!=final){
    aux=media+aumento;
    sessao = (aux * (inicial))-200;
    
    if(maiorL<sessao){
      maiorL=sessao;
      mediai=aux;
      iniciali=inicial;
    }
    inicial = inicial - 0.5;
    
		printf("Com %d pessoas a %.2f reais o lucro eh de %.2f reais a sessao\n",aux, inicial, sessao);
		printf("Escreva o aumento de publico com o ingresso 0.50 mais baratos\n");
		scanf("%d", &aumento);
	}
	
  printf("O maior lucro foi %.2f com %d pessoas com ingresso a %.2f reais ",maiorL, mediai, iniciali);
	return 0;
}