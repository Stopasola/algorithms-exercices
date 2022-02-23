#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    float nasci,meses,mes=0,cont=0,masc=0,pmor,pmasc,pmes;
	char sex[5];
	printf("O numero de criancas nascidas no periodo foi de ?\n");
	scanf("%f",&nasci);
	printf("Escreva se o sexo e masculino 'M' ou feminino 'F' e depois quando meses a crianca sobreviveu\n");
    	fflush(stdin);
		gets(sex);
    	fflush(stdin);
       	while(strcmp(sex,"vazio") != 0)
		{	
			if(strcmp(sex,"M") == 0){
				masc++;
			}
			fflush(stdin);
    		scanf("%f",&meses);
    		if(meses<=24){
				mes++;
			}
			fflush(stdin);
			cont++;
			fflush(stdin);
			gets(sex);
    		fflush(stdin);
		}
    pmor = cont/nasci;
    pmasc = masc/cont;
    pmes = mes/cont;
    printf("A porcentagem de crian�as mortas no per�odo foi de %.1f\n",pmor);
    printf("A porcentagem de crian�as do sexo masculino mortas no per�odo %.1f\n",pmasc);
    printf("A porcentagem de crian�as que viveram 24 meses ou menos no per�odo %.1f",pmes);
	return 0;
}