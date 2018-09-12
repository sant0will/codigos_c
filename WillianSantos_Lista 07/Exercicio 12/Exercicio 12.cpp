#include <stdio.h>


float matriz[3][4];
int i;
int j;
	
main(){
		
	for(i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("Digite um numero para posicao: [%i],[%i]  \n",i,j);
			scanf("%f", &matriz[i][j]);
		}	
		printf("\n");
	}
	
	printf("--  Matriz  --\n");
	for (i = 0; i < 3; i++){
  		for (j = 0; j < 4; j++){
		    if(i == 0 && j == 0){
		    	printf (" %.2f ", matriz[i][j]);	
		    }else	if(i == 2 && j == 0){
		    	printf (" %.2f ", matriz[i][j]);	
		    }else{
		    	printf (" - ");
		    }
 		 }
 		printf("\n"); 
	}
	
	
	
}
