#include<stdio.h>
int main()
{		
	FILE *file;
	FILE *file2;
	int a=0;
	char ch;
	file = fopen("textoEx10.txt","r");
	file2 = fopen("texto2Ex10.txt","w+");
	if(file==NULL ||file2==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	} 	
	while( (ch = fgetc(file)) != EOF ){
		switch(ch){
			case 'a':
				ch='*';
                fputc(ch, file2);
                break;
            case 'e':
				ch='*';
                fputc(ch, file2);
                break;
            case 'i':
				ch='*';
                fputc(ch, file2);
                break;
			case 'o':
				ch='*';
                fputc(ch, file2);
                break;
			case 'u':
				ch='*';
                fputc(ch, file2);
                break;    
		default:		
			fputc(ch,file2);
			break;
		}
		
	}
	fclose(file);
	fclose(file2);
	return 0;
}

