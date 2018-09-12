#include <stdio.h>

int matriz[5][5];
int i;
int j;
int somaL4;
int somaC2;
int somaDP;
int somaDS;
int somaGeral;
	
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
    		 
    		 if(i == 3){
  				somaL4 += matriz[i][j];
  			 }
  			 
  			 if(j == 1){
  			 	somaC2 += matriz[i][j];	
  			 }
  			 
  			 if(i == j){
  			 	somaDP += matriz[i][j];
  			 }
  			 
  			 if(i + j == 4){
  			 	somaDS += matriz[i][j];
  			 }
  			 
  			 somaGeral += matriz[i][j];	 
 		 }
 		printf("\n"); 
	}
	printf("\n"); 
	printf("Soma da linha 4 = %i\n",somaL4);
	printf("Soma da coluna 2 = %i\n",somaC2);
	printf("Soma da diagonal principal = %i\n",somaDP);
	printf("Soma da diagonal secundaria = %i\n",somaDS);
	printf("Soma geral da matriz = %i\n",somaGeral);
}
