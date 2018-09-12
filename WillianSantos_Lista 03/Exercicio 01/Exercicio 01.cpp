#include <stdio.h>
#include <math.h>

main(){
	float num;
	
	printf("Escreva um numero: ");
	scanf("%f", &num);
	
	if (num > 0){
		printf("Numero e positivo!");
	}else
	if(num < 0){
		printf("Numero e negativo!");
	}else{
		printf("Numero e zero!");
	}	
}
