#include <stdio.h>
#include <string.h>


int matriz[5][5];
int i;
int j;
int cont = 0;
int soma = 0;

	
main(){
		
	for(i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("Digite um numero para posicao: [%i],[%i]  \n",i,j);
			scanf("%i", &matriz[i][j]);
		}	
		printf("\n");
	}
	
	printf("-- Matriz --\n");
	for (i = 0; i < 5; i++ ){
  		for (j = 0; j < 5; j++ ){
    		 printf (" %i ", matriz[i][j]);
    		 if(matriz[i][j] % 2 == 0){
  				soma += matriz[i][j];
  				cont++;
  			}
 		 }
 		printf("\n"); 
	}
	printf("\n"); 
	printf("Media dos valores pares = %i",soma/cont);
}
