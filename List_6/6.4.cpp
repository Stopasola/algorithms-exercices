#include<stdio.h>
int main()
{
    int i;
    FILE *file;
    file = fopen("dados.txt","w");
    for(i=1;i<=100;i++){
    	fprintf(file,"%d\n",i);
	}
    fclose(file);
    return 0;
}
/*Fa�a um programa que crie um arquivo TEXTO em disco, com o nome �dados.txt�,
e escreva neste arquivo em disco uma contagem que v� de 1 at� 100, com um n�mero
em cada linha.*/
