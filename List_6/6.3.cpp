#include<stdio.h>
int main()
{
    int i;
    FILE *file;
    file = fopen("dados.bin","w+b");
    for(i=1;i<=100;i++){
    	fprintf(file,"%d\n",i);
	}
    fclose(file);
    return 0;
}
/*Faça um programa que separe este arquivo texto em dois arquivos binários de
registros cujos campos são as informações descritas acima: o 1º arquivo deve conter
apenas os modelos do sexo masculino (‘M’) e o 2º arquivo deve conter apenas os
modelos do sexo feminino (‘F’).*/
