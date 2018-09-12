#include <stdio.h>

int num;
int cont;
int menor = 99999;
int maior = 0;


main(){

	for (cont = 1; cont++;){
		printf("Digite uma numero inteiro e positivo: \n");
		scanf("%i", &num);
		
		if (num <= 0){
			printf("Zero e negativos nao entram no calculo!\n");
			printf("---------------------------------------\n");
			printf("\n");			
			printf("Maior numero: %i\n",maior);	
			printf("Menor numero: %i",menor);
			break;
		}
		
		if(maior < num){
			maior = num;
		}
		
		if(menor > num){
			menor = num;
		}		
}
}




