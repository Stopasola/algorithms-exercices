#include<stdio.h>
int main()
{
	
    float massa,massaf,tempoh=0,tempom=0,tempos=0,cont=0;
    printf("Escreva a massa inicial do material radioativo (gramas):\n");
    scanf("%f",&massa);
    printf("\nA massa inicial era de %f g\n",massa);
    while(massa>=0.5){
    	massa = massa / 2;
    	cont++;
	}
	tempos = cont * 50;
	while(tempos>=3600){
		tempoh++;
		tempos = tempos -3600; 	
	}
	while(tempos>=60){
		tempom++;
		tempos = tempos - 60;
	}
	printf("A massa fianl eh de %f g\n",massa);
	printf("O tempo foi de %.0f h %.0f m %.0f s",tempoh,tempom,tempos);
    return 0;
}
