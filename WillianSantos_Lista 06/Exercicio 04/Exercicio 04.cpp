#include <stdio.h>

int num;
int cont;
int somaPositivo;
int somaNegativo;
int somaNP;


main(){

	for (cont = 1; cont++;){
		printf("Digite uma numero inteiro: \n");
		scanf("%i", &num);
		
		somaNP = somaNegativo + somaPositivo;
		
		if(num > 0){
			somaPositivo += num;
		}else if(num < 0){
			somaNegativo += num;		
		}else if(num == 0){			
			printf("Soma dos positivos: %i\n",somaPositivo);	
			printf("Soma dos negativos: %i\n",somaNegativo);
			printf("Soma dos dois: %i",somaNP);
			break;
		}	
}
}




