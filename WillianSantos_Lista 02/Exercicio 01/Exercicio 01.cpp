#include <stdio.h>
#define pi 3.1415926

main(){
	float altura;
	float area;
	float raio;
	
	printf("Escreva a altura do cilindro: \n");
	scanf("%f", &altura);
	
	printf("Escreva o raio do cilindro: \n");
	scanf("%f", &raio);
	
	area = 2 * pi * altura * raio;
	
	printf("A area superficial do cilindro: %f",area);
	
	
}
