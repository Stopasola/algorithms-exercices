#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nascimento
{
   int mes;
   int ano;
};
typedef struct nascimento data;
struct fazenda{
	int cod;
	int leite;
	int alim;
	data nasc;
	char abate[1];
	
}gado[4];
void ler(){
	int i;
		for(i=0;i<4;i++){
		printf("Escreva o código da cabeça de gado\n");
		scanf("%d",&gado[i].cod);
		printf("Escreva o número de litros de leite produzido por semana\n");
		scanf("%d",&gado[i].leite);
		printf("Escreva a quantidade de alimento ingerida por semana - em quilos\n");
		scanf("%d",&gado[i].alim);
		printf("Escreva a data de nascimento - mes \n");
		scanf("%f",&gado[i].nasc.mes);
		printf("Escreva a data de nascimento - ano \n");
		scanf("%f",&gado[i].nasc.ano);
		}
		system("Pause");
		system("cls");
}
void abate(){
	int i;
	for(i=0;i<4;i++){
		if( gado[i].nasc.ano>5 || gado[i].leite<40 || (gado[i].leite>50 && gado[i].leite>50 && gado[i].alim>50) ){
			gado[i].abate == "S";
		}
		else{
			gado[i].abate == "N";
		}
	}
}
int leiteT(){
	int totalL=0,i;
	for(i=0;i<4;i++){
		totalL += gado[i].leite;
		}
	return totalL; 
}
int comidaT(){
	int totalC=0,i;
	for(i=0;i<4;i++){
		totalC += gado[i].alim;
		}
	return totalC; 
}
int leiteaposabate(){
	int apabate=0,i;
	for(i=0;i<4;i++){
		if( strcmp(gado[i].abate,"N") == 0)
		apabate += gado[i].leite;
		}
	return apabate;
}
int alimentoaposabate(){
	int comidaapabate=0,i;
	for(i=0;i<4;i++){
		if( strcmp(gado[i].abate,"N") == 0)
		comidaapabate += gado[i].alim;
		}
	return comidaapabate;
} 
int gadoabate(){
	int num=0,i;
	for(i=0;i<4;i++){
		if( strcmp(gado[i].abate,"S") == 0)
			num++;
		}
	return num;
} 
int main(){
	int op,i,totalL,totalC,apabate,comidaapabate,num;
	while(op != 6){
	printf("Escolha uma opção\n");
	printf("1-Verificar a quantidade total de leite produzida por semana na fazenda. \n");
    printf("2-Verificar a quantidade total de alimento consumido por semana na fazenda. \n");
	printf("3-Verificar a quantidade total de leite que vai ser produzido por semana na fazenda,após o abate \n");
	printf("4-Verificar a quantidade total de alimento que vai ser consumido por semana na fazenda, apos o abate  \n");
	printf("5-Verificar número de cabeças de gado que iram para o abate. \n");
	printf("6-Sair\n");
	scanf("%d",&op);
	if(op==1){
		totalL = leiteT();
		printf("A quantidade de leite produzida na semanda foi %d\n",totalL);
		system("Pause");
		system("cls");
	}
	if(op==2){
		totalC = comidaT();
		printf("A quantidade de comida consumida na semanda foi %d\n",totalC);
		system("Pause");
		system("cls");
	}
	if(op==3){
		apabate = leiteaposabate();
		printf("A quantidade total de leite que vai ser produzido por semana na fazenda,após o abate eh %d\n",apabate);
		system("Pause");
		system("cls");
	}
	if(op==4){
		comidaapabate = alimentoaposabate();
		printf("A quantidade total de comida que vai ser consumida por semana na fazenda,após o abate eh %d\n",comidaapabate);
		system("Pause");
		system("cls");
	}
	if(op==5){
		num = gadoabate();
		printf("O número de cabeças de gado que iram para o abate eh %d\n",num);
		system("Pause");
		system("cls");
	}
	}
	return 0;
}
