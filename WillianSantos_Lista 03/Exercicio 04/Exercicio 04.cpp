#include <stdio.h>
#include <math.h>

main(){
	float n1;
	float n2;
	
	printf("Escreva a numero 01: ");
	scanf("%f", &n1);
	
	printf("Escreva a numero 02: ");
	scanf("%f", &n2);
	
	
	if (n1 > n2){
		printf("Numero 01 e o maior");
	}else
	if(n2 > n1){
		printf("Numero 02 e o maior");
	}else{
		printf("Numeros sao iguais");
	}	
}
