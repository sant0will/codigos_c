#include <stdio.h>


int matriz[7][8];
int i;
int j;
	
main(){
		
	for(i = 0; i < 7; i++){
		for (j = 0; j < 8; j++){
			matriz[i][j] = i + j;
		}	
		printf("\n");
	}
	
	printf("--  Matriz  --\n");
	for (i = 0; i < 7; i++){
  		for (j = 0; j < 8; j++){
		    	printf (" %i ", matriz[i][j]);
 		 }
 		printf("\n"); 
	}	
}
