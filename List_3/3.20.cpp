#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct cadastro{
	int codigo;
	char nome[40];
	char cargo[20]; 
	float salario;
	char endereco[50];
	int endereco2; 
	int telefone;
	char status[1];
}add[100];
int main(){
	int op,op2,op3,cod,i;
	char nomet[40];
	while(3){
 	printf("Escolha um opcao:\n1- Inclusao de funcionarios\n2- Consulta de funcionarios por nome ou codigo\n3- Alteracao nos dados do funcionario\n4- Exclusao de funcionario\n5- Relat�rio de funcionarios\n6-Sair do Programa\n");
	scanf("%d",&op);
	if(op==1){
		
		printf("Escreva o codigo do funcionario\n");
		scanf("%d",&add[i].codigo);
		printf("Escreva o nome do funcionario\n");
		fflush(stdin);
		gets(add[i].nome);
		fflush(stdin);
		printf("Escreva o cargo do funcionario\n");
		fflush(stdin);
		gets(add[i].cargo);
		fflush(stdin);
		printf("Escreva o salario do funcionario\n");
		scanf("%f",&add[i].salario);
		printf("Escreva o endereco do funcionario(rua,cidade,estado)\n");
		fflush(stdin);
		gets(add[i].endereco);
		fflush(stdin);
		printf("Escreva o endereco do funcionario(numero,cep)\n");
		scanf("%d",&add[i].endereco2);
		printf("Escreva o telefone do funcionario\n");
		scanf("%d",&add[i].telefone);
		printf("Escreva o status do funcionario\n' ' -> funcionario ativo\n'*' -> funcionario inativo");
		fflush(stdin);
		gets(add[i].status);
		fflush(stdin);
		i++;
	}
	if(op==2){
		printf("Voce deseja consultar o funcionario por codigo do produto ou nome\n");
		scanf("%d",&op2);
		if(op2==1){
			printf("Digite o cod\n");
			scanf("%d",&cod);
			for(i=0;i<5;i++){
				if(cod == add[i].codigo){
					printf(" Codigo: %d\n",add[i].codigo);
					printf(" Nome: %c\n",add[i].nome);
					printf(" Cargo: %c\n",add[i].cargo);
					printf(" Salario: %f\n",add[i].salario);
					printf(" Endereco: %c\n",add[i].endereco);
					printf(" Endereco2: %d\n",add[i].endereco2);
					printf(" Telefone: %d\n",add[i].telefone);
					printf(" Status: %c\n",add[i].status);
				}else{
					printf("O cod n foi encontrado\n");
				}
			}
		}
		if(op2==2){
			printf("Digite o nome\n");
			fflush(stdin);
			gets(nomet);
			fflush(stdin);
			for(i=0;i<5;i++){
				if(strcmp(nomet,add[i].nome)!=0){
					printf(" Codigo: %d\n",add[i].codigo);
					printf(" Nome: %c\n",add[i].nome);
					printf(" Cargo: %c\n",add[i].cargo);
					printf(" Salario: %f\n",add[i].salario);
					printf(" Endereco: %c\n",add[i].endereco);
					printf(" Endereco2: %d\n",add[i].endereco2);
					printf(" Telefone: %d\n",add[i].telefone);
					printf(" Status: %c\n",add[i].status);
				}else{
					printf("O nome n foi encontrado\n");
				}
			}
		}
	}
	if(op==3){
		printf("Escolha o funcionario que voce ira alterar a ficha\n");
		printf("Digite o cod\n");
		scanf("%d",&cod);
		for(i=0;i<5;i++){
			if(cod == add[i].codigo){
				printf("\nEscolha um dado para alterar da ficha do funcionario\n");
				printf(" 1-Codigo\n");
				printf(" 2-Nome\n");
				printf(" 3-Cargo\n");
				printf(" 4-Salario\n");
				printf(" 5-Endereco\n");
				printf(" 6-Endereco2\n");
				printf(" 7-Telefone\n");
				printf(" 8-Status\n");
				scanf("%d",&op3);
				if(op3==1){
					printf("Escreva o Novo codigo do funcionario\n");
					scanf("%d",&add[i].codigo);	
				}
				if(op3==2){
					printf("Escreva o Novo nome do funcionario\n");
					fflush(stdin);
					gets(add[i].nome);
					fflush(stdin);			
				}
				if(op3==3){
					printf("Escreva o Novo cargo do funcionario\n");
					fflush(stdin);
					gets(add[i].cargo);
					fflush(stdin);			
				}
				if(op3==4){
					printf("Escreva o Novo salario do funcionario\n");
					scanf("%f",&add[i].salario);						
				}
				if(op3==5){
					printf("Escreva o Novo endereco do funcionario(rua,cidade,estado)\n");
					fflush(stdin);
					gets(add[i].endereco);
					fflush(stdin);									
				}
				if(op3==6){
					printf("Escreva o Novo endereco2 do funcionario(numero,cep)\n");
					scanf("%d",&add[i].endereco2);			
				}
				if(op3==7){
					printf("Escreva o status do funcionario\n' ' -> funcionario ativo\n'*' -> funcionario inativo");
					fflush(stdin);
					gets(add[i].status);
					fflush(stdin);				
				}	
			}
		}
		}
	if(op==4){
		printf("Escolha o funcionario que voce ira excluir a ficha\n");
		printf("Digite o cod\n");
		scanf("%d",&cod);
		for(i=0;i<100;i++){
			if(cod == add[i].codigo){
				while(i <= 100){
					add[i].codigo = add[i+1].codigo; 
					add[i].nome = add[i+1].nome;
					add[i].cargo = add[i+1].cargo;
					add[i].salario = add[i+1].salario;
					add[i].endereco = add[i+1].endereco;
					add[i].endereco2 = add[i+1].endereco2;
					add[i].telefone = add[i+1].telefone;
					add[i].status = add[i+1].status;
					i++; 
				}
			}
		}
	}
	if(op==5){		
		
		for(i=0;i<5;i++){
			printf("\nFuncionario %d\n",i+1);
				printf(" Codigo: %d\n",add[i].codigo);
				printf(" Nome: %c\n",add[i].nome);
				printf(" Cargo: %c\n",add[i].cargo);
				printf(" Salario: %f\n",add[i].salario);
				printf(" Endereco: %c\n",add[i].endereco);
				printf(" Endereco2: %d\n",add[i].endereco2);
				printf(" Telefone: %d\n",add[i].telefone);
				printf(" Status: %c\n",add[i].status);
				printf("\n\n\n");
			}
	}
	if(op==6){
		return 0;
	}
	}
}
