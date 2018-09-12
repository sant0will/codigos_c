#include <stdio.h>

main(){
	float altura;
	float area;
	float base;
	float lado;
	
	printf("Escreva a altura do cubo: \n");
	scanf("%f", &altura);
	
	printf("Escreva a base: \n");
	scanf("%f", &base);
	
	printf("Escreva o lado: \n");
	scanf("%f", &lado);
	
	area =  ((altura*lado)+(altura*base)+(lado*base))*2;
	
	printf("A area cubo retangular: %f",area);	
}
