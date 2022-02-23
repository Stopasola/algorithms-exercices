#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char nome[20],sexo,olho;
	float alt,peso;
	FILE* file;
	file = fopen("dados2.txt","r");
	FILE* filem;
	filem = fopen("Ex2m.txt","w");
	FILE* filef;
	filef = fopen("Ex2f.txt","w");
	if(file==NULL || filem==NULL || filef==NULL ){
		printf("N existe arquivo\n");
	}
	else{
		while( (fscanf(file,"%s %c %c %f %f",&nome,&sexo,&olho,&alt,&peso)) != EOF ){
			//printf("%s %c %c %f %f\n",nome,sexo,olho,alt,peso);
			if(sexo == 'm'){
				fprintf(filem,"%s %c %c %f %f\n",nome,sexo,olho,alt,peso);
			}
			if(sexo == 'f'){
				fprintf(filef,"%s %c %c %f %f\n",nome,sexo,olho,alt,peso);
			}
		}
		
	}
	fclose(file);
	fclose(file);
	fclose(file);
	return 0;
}