#include <stdio.h>

main(){
	int numeros[12];
	int vetorX[12];
	int vetorY[12];
	int i;
		
	for(i = 0; i < 12; i++){
		printf("Digite um numero - Posicao %i:  \n",(i+1));
		scanf("%i",&numeros[i]);
	}	
	printf("Numeros pares divisiveis por 3!");
	printf("\n");
	for(i = 0; i < 12; i++){
		if(numeros[i] % 2 == 0 && numeros[i] % 3 == 0){
			vetorX[i] = numeros[i];
			printf("Posição %i -> Número %i\n",i,vetorX[i]);
		}else{
			printf(" * Posição %i ->  %i\n",i,numeros[i]);
		}
	}
	printf("Numeros impares divisiveis por 5!");
	printf("\n");	
	for(i = 0; i < 12; i++){
		if(numeros[i] % 2 == 0 && numeros[i] % 5 == 0){
			vetorY[i] = numeros[i];
			printf("Posição %i -> Número %i\n",i,vetorY[i]);
		}else{
			printf(" * Posição %i -> %i\n",i,numeros[i]);
		}
	}	
}
