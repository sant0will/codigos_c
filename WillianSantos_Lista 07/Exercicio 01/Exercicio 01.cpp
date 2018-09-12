#include <stdio.h>

main(){
	int numeros[10];
	int i;
	int flag = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um numero - Posicao %i:  ",(i+1));
		scanf("%i",&numeros[i]);
	}
	printf("\n");
	printf("\n");
	
	for(i = 0; i < 10; i++){
		if(numeros[i] > 20){
			if (flag == 0){
				printf("Valores maiores que 20: \n");
			}
			printf("Posicao %i => %i\n", (i+1), numeros[i]);
			flag = 1;
		}	
	}
	
	if(flag == 0){
		printf("Nao foram encontrados valores maiores que 20!!");
	}
}
