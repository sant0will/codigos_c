#include <stdio.h>
#include <math.h>

main(){
	int n1;
	
	printf("Escreva um numero: ");
	scanf("%i", &n1);

	
	if (n1 % 2 == 0 ) {
			printf("Numero Par!");
		}else{
			printf("Numero Impar!");
		}
}
