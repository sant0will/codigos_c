#include <stdio.h>
#include <math.h>

main(){
	int n1;
	int n2;
	
	printf("Escreva a numero 01: ");
	scanf("%i", &n1);
	
	printf("Escreva a numero 02: ");
	scanf("%i", &n2);
	
	
	if (n1 > n2){
		printf("%i - %i", n1, n2);
	}else
	if(n2 > n1){
		printf("%i - %i", n2, n1);
	}
}
