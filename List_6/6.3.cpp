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
/*Fa�a um programa que separe este arquivo texto em dois arquivos bin�rios de
registros cujos campos s�o as informa��es descritas acima: o 1� arquivo deve conter
apenas os modelos do sexo masculino (�M�) e o 2� arquivo deve conter apenas os
modelos do sexo feminino (�F�).*/
