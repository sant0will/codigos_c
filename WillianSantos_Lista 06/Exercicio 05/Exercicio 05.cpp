#include <stdio.h>

int idade;
float altura;
float somaAltura;
int cont;
int cont1;

main(){

	for (cont = 1; cont++;){
		printf("Digite a idade: \n");
		scanf("%i", &idade);
		
		if(idade <= 0){			
			printf("Media de alturas de maiores de 50 anos: %f\n",somaAltura / cont1);	
			break;
		}
		
		printf("Digite a altura: \n");
		scanf("%f", &altura);
		
		if(idade > 50){
			somaAltura += altura;
			cont1++;	
		}	
	}
}




