#include <stdio.h>

float altura;
float maiorAltura;
float somaAltura;
int soma2 = 0;
int i;

main(){

	do{
		printf("Digite a altura: \n ");
		scanf("%f",&altura);
		
		if (maiorAltura < altura){
			maiorAltura = altura;
		}
		
		if (altura > 2){
			soma2++;
		}
		
		somaAltura += altura;
		i++;
	}while(i < 4);
	
	printf("Maior altura do grupo: %f\n", maiorAltura);
	printf("Media do grupo: %f\n", somaAltura / 4 );
	printf("Numero de pessoas com altura maior que 2m: %i\n", soma2);
	
	
}
