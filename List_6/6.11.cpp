#include<stdio.h>
int main()
{		
	FILE *file;
	char produto[100];
	float num=0,tot=0;
	file = fopen("Ex11.txt","r");
	if(file==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	} 	
	while( fscanf(file,"%s %f", &produto, &num)!=EOF){
		//printf("%f\n",  num);
		tot += num;    
    }
	printf("%f",tot);
	fclose(file);
	return 0;
}

