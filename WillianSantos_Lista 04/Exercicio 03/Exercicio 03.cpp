#include <stdio.h>

main(){
	int num;
	int cont;
	int contNegativo = 0;
	
	while(cont <= 10){
		printf("Digite um numero inteiro: \n");
		scanf("%i", &num);
		if(num < 0){
			contNegativo++;
		}	
		cont++;
	}
	printf("Quantidade de numero negativos => %i \n", contNegativo);
}
