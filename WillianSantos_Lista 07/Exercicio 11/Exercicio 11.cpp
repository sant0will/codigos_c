#include <stdio.h>
#include <math.h>

int matriz[5][5];
int i;
int j;
	
main(){
		
	for(i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("Digite um numero para posicao: [%i],[%i]  \n",i,j);
			scanf("%i", &matriz[i][j]);
		}	
		printf("\n");
	}
	
	printf("--  Matriz  --\n");
	for (i = 0; i < 5; i++ ){
  		for (j = 0; j < 5; j++ ){
		    printf (" %i ", matriz[i][j]);
 		 }
 		printf("\n"); 
	}
	
	printf("-- Matriz ao cubo --\n");
	for (i = 0; i < 5; i++ ){
  		for (j = 0; j < 5; j++ ){
  			matriz[i][j] = pow (matriz[i][j], 3);
		    printf (" %i ", matriz[i][j]);
 		 }
 		printf("\n"); 
	}
	
}
