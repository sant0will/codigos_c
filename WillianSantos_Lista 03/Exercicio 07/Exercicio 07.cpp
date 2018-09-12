#include <stdio.h>
#include <math.h>

main(){
	int n1;
	int n2;
	int n3;
	
	printf("Escreva a numero 01: ");
	scanf("%i", &n1);
	
	printf("Escreva a numero 02: ");
	scanf("%i", &n2);
	
	printf("Escreva a numero 03: ");
	scanf("%i", &n3);
	
	if (n1 > n2 && n1 > n3 ) {
		if (n2 > n3){
			printf("Soma dos maiores: %i + %i = %i", n1, n2, n1+n2);
		}else{
			printf("Soma dos maiores: %i + %i = %i", n1, n3, n1+n3);
		}		
	}else
	if(n2 > n1 && n2 > n3){
		if (n1 > n3){
			printf("Soma dos maiores: %i + %i = %i", n2, n1, n1+n2);
		}else{
			printf("Soma dos maiores: %i + %i = %i", n2, n3, n2+n3);
		}	
	}else
	if(n3 > n1 && n3 > n2){
		if (n1 > n2){
			printf("Soma dos maiores: %i + %i = %i", n3, n1, n1+n3);
		}else{
			printf("Soma dos maiores: %i + %i = %i", n3, n2, n2+n3);
		}	
	
	}
}
