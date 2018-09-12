#include <stdio.h>
#include <math.h>>
#define pi 3.1415962

main(){
	float altura;
	float volume;
	float raio;
	
	printf("Escreva a altura do cilindro: \n");
	scanf("%f", &altura);
	
	printf("Escreva o raio do cilindro: \n");
	scanf("%f", &raio);
	
	volume = pi * altura * pow(raio,2);
	
	printf("O volume do cilindro: %.2f",volume);	
}
