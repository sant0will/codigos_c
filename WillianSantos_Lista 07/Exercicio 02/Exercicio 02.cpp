#include <stdio.h>

main(){
	int numeros[20];
	int i;
	
	for(i = 0; i < 20; i++){
		printf("Digite um numero - Posicao %i:  ",(i+1));
		scanf("%i",&numeros[i]);
	}
	
	printf("-Posicoes com numeros iguais a 10-\n");
	
	for(i = 0; i < 20; i++){
		if(numeros[i] == 10){
			printf("Posicao %i \n",(i+1));
		}	
	}
}
