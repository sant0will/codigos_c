#include <stdio.h>

main(){
	int numeros[20];
	int n;
	int i;
	int soma = 0;
	
	printf("Digite o numero de repeticoes: ");
	scanf("%i",&n);
		
	for(i = 0; i < n; i++){
		printf("Digite um numero - Posicao %i:  \n",(i+1));
		scanf("%i",&numeros[i]);
	}
	
	for(i = 0; i < n; i++){
		if(numeros[i] % 2 == 0){
			soma += numeros[i];
		}
	}
	
	printf("Soma dos numeros pares: %i", soma);	
}
