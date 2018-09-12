//Faça um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius.

#include <stdio.h>
#include <math.h>

main(){
	float celsius;
	float fahrenheit;
	
	printf("Digite a temperatura em fahrenheit: \n");
	scanf("%f", &fahrenheit);
	
	celsius = (float)(fahrenheit - 32)/1.8;
	
	printf("A temperatura em celsius: %.2f",celsius);
}
