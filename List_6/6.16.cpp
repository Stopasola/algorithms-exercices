#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include <string.h>
int main(){
	
	char ch;
	int cont=0,i,j,qpos,m,n,p1,p2;
	FILE* file;	
	file = fopen("ex16.txt","r");
	FILE* file2;	
	file2 = fopen("ex16w.txt","w");
	if(file == NULL){
		printf("Erro\n");
	}
	else{
			fscanf(file,"%d %d %d",&m,&n,&qpos);
			int mat[m][n];
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					mat[i][j] = 1;	
				}
			}
			while((fscanf(file,"%d %d",&p1,&p2)) != EOF){
					mat[p1][p2]=0;
			}
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					fprintf(file2,"%d ",mat[i][j]);	
				}fprintf(file2,"\n");
			}
	}
	fclose(file);
	fclose(file2);
	return 0;
}
