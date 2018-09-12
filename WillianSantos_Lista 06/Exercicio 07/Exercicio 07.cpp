#include <stdio.h>

 int cont;
 int numPrimo;
 int divisao;
   
main(){
	for (numPrimo = 100; numPrimo <= 1000; numPrimo++){
		cont = 0;
		for (divisao = 1; divisao <= numPrimo; divisao++){	
			if (numPrimo % divisao == 0){
				cont++;
			}
		}	
		if (cont == 2){
			printf("Numero primo: %i \n", numPrimo);
		}		
	}
}




