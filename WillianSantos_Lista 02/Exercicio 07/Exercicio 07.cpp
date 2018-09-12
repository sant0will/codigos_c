#include <stdio.h>
#include <math.h>>
#define pi 3.1415962

main(){
	float altura;
	float volume;
	float raio;
	
	printf("Escreva a altura do cone: \n");
	scanf("%f", &altura);
	
	printf("Escreva o raio do cone: \n");
	scanf("%f", &raio);
	
	volume = (float) (pi * pow(raio,2) * altura) / 3;
	
	printf("O volume do cone: %.2f",volume);	
}
