#include<stdio.h>
int main()
{		
	FILE *file;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	char ch;
	file = fopen("textoEx9.txt","r");
	if(file==NULL){
		printf("Erro ao abrir o arquivo");
		return 0;
	}
	else
	{ 	
		while( (ch = fgetc(file)) != EOF ){
			if(ch=='a' || ch =='A'){
				a++;
			}
			if(ch=='b' || ch =='b'){
				b++;
			}
			if(ch=='c' || ch =='C'){
				c++;
			}
			if(ch=='d' || ch =='D'){
				d++;
			}
			if(ch=='e' || ch =='E'){
				e++;
			}
			if(ch=='f' || ch =='F'){
				f++;
			}
		}
	}
	printf("A foi encontrado %d vezes\n",a);
	printf("B foi encontrado %d vezes\n",b);
	printf("C foi encontrado %d vezes\n",c);
	printf("D foi encontrado %d vezes\n",d);
	printf("E foi encontrado %d vezes\n",e);
	printf("F foi encontrado %d vezes\n",f);
	fclose(file);
	return 0;
}

