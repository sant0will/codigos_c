#include <stdio.h>
#include <math.h>>
#define pi 3.1415962

main(){
	float volume;
	float raio;
	
	printf("Escreva o raio da esfera: \n");
	scanf("%f", &raio);
	
	volume = (float) 4 / 3 * pi * pow(raio,3);
	
	printf("O volume da esfera: %.2f",volume);	
}
