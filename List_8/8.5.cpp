#include<stdio.h>
#include<stdlib.h>
int main()
{
    float precotot,media,kwhcon,cod,kwhpre,precocon,maior=0,menor,resi=0,come=0,indu=0;
	int aux=0,numcon,cont=0;;
	while(3){
    	printf("Numero do consumidor?\n");
		scanf("%d",&numcon);
		if(numcon==0){
			break;
		}
		printf("Quantidade de kWh consumidos durante o mes?\n");
		scanf("%f",&kwhcon);
		printf("Preco do kWh consumido ?\n");
		scanf("%f",&kwhpre);
		printf("Codigo do tipo de consumidor:\n- Residencial == 0\n- Comercial == 1\n- Industrial == 2\n");
		scanf("%f",&cod);	
		precocon = kwhcon * kwhpre;
		printf("Para o consumidor %d o total a pagar foi %.2f reais\n",numcon,precocon);
		if(precocon>maior){
			maior = precocon;
		}
		if(aux==0){
			menor=precocon;
		}
		aux++;
		if(precocon<=menor){
			menor = precocon;
		}
		if(cod==0){
			resi += precocon;
		}
		if(cod==1){
			come += precocon;
		}
		if(cod==2){
			indu += precocon;			
		}
		cont++;
		precotot += precocon;
	}
	media = precotot/cont;
	printf("O maior consumo conferido foi %.2f \n",maior);
	printf("O menor consumo conferido foi %.2f \n",menor);
	printf("O consumo total na area residencial foi %.2f \n",resi);
	printf("O consumo total na area comercial foi %.2f \n",come);
	printf("O consumo total na area industrial foi %.2f \n",indu);
	printf("A media de consumo foi %.2f\n",media);
	return 0;
}