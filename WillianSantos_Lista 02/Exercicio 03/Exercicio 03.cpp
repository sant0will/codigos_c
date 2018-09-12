#include <stdio.h>
#include <math.h>
#define pi 3.1415926

main(){
	float area;
	float raio;
	
	printf("Escreva o raio da esfera: \n");
	scanf("%f", &raio);
	
	area = 4 * pi * pow(raio,2);
	
	printf("A area superficial da esfera: %.3f",area);
}
