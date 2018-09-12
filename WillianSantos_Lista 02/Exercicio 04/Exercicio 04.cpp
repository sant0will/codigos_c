#include <stdio.h>
#define pi 3.1415962

main(){
	float altura;
	float area;
	float raio;
	
	printf("Escreva a altura do cone: \n");
	scanf("%f", &altura);
	
	printf("Escreva o raio do cone: \n");
	scanf("%f", &raio);
	
	area = pi * altura * raio;
	
	printf("A area do cone: %.2f",area);	
}
