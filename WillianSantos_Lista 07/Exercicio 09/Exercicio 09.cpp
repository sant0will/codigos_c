#include <stdio.h>

int matriz[7][4];
int i;
int j;
int menor = 999999;
int posi;
int posj;
main(){
		
	for(i = 0; i < 7; i++){
		for (j = 0; j < 4; j++){
			printf("Digite um numero para posicao: [%i],[%i]  \n",i,j);
			scanf("%i", &matriz[i][j]);
		}	
		printf("\n");
	}
	
	printf("-- Matriz --\n");
	for (i = 0; i < 7; i++ ){
  		for (j = 0; j < 4; j++ ){
  			if(matriz[i][j] < menor){
  				menor = matriz[i][j];
  				posi = i;
  				posj = j;  				
  			}
    		 printf (" %i ", matriz[i][j]);	 
 		 }
 		printf("\n"); 
	}
	printf("\n"); 
	printf("Menor numero da matriz = %i posicao [%i],[%i]!",menor, posi, posj);
}
