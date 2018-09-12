#include <stdio.h>
#include <math.h>

float Adicao(float valor01, float valor02);
float Subtracao(float valor01, float valor02);
float Multiplicacao(float valor01, float valor02);
float Divisao(float valor01, float valor02);
float Exponenciacao(float valor01, float valor02);
float Raiz(float valor01);


main(){
	int i;
	int operacao;
	float valor01;
	float valor02;
	
	for(i = 0;;i++){
		printf("\n");
		printf("Qual operacao deseja realizar?\n");
		printf("1 - Adicao\n");
		printf("2 - Subtracao\n");
		printf("3 - Multiplicacao\n");
		printf("4 - Divisao\n");
		printf("5 - Exponenciacao\n");
		printf("6 - Raiz Quadrada\n");
		scanf("%i", &operacao);
		printf("\n");
	
		if (operacao == 1){
			printf("Digite o primeiro valor: ");
			scanf("%f", &valor01);
			printf("Digite o primeiro valor: ");
			scanf("%f", &valor02);
			
			Adicao(valor01, valor02);
			
			}else if (operacao == 2){
				printf("Digite o primeiro valor: ");
				scanf("%f", &valor01);
				printf("Digite o primeiro valor: ");
				scanf("%f", &valor02);
			
				Subtracao(valor01, valor02);
				
				}else if (operacao == 3){
					printf("Digite o primeiro valor: ");
					scanf("%f", &valor01);
					printf("Digite o primeiro valor: ");
					scanf("%f", &valor02);
			
					Multiplicacao(valor01, valor02);
				
					}else if (operacao == 4){
						printf("Digite o primeiro valor: ");
						scanf("%f", &valor01);
						printf("Digite o primeiro valor: ");
						scanf("%f", &valor02);
			
						Divisao(valor01, valor02);
						
						}else if (operacao == 5){
							printf("Digite o valor: ");
							scanf("%f", &valor01);
							printf("Digite o expoente: ");
							scanf("%f", &valor02);
			
							Exponenciacao(valor01, valor02);
							
							}else if (operacao == 6){
								printf("Digite o valor: ");
								scanf("%f", &valor01);
			
								Raiz(valor01);
							}
	}
}

float Adicao(float valor01, float valor02){
	float result = 0;
	
	result = valor01 + valor02;
	
	printf("Resultado => %.2f\n", result);
}

float Subtracao(float valor01, float valor02){
	float result = 0;
	
	result = valor01 - valor02;
	
	printf("Resultado => %.2f\n", result);
}

float Multiplicacao(float valor01, float valor02){
	float result = 0;
	
	result = valor01 *valor02;
	
	printf("Resultado => %.2f\n", result);
}

float Divisao(float valor01, float valor02){
	float result = 0;
	
	result = valor01 / valor02;
	
	printf("Resultado => %.2f\n", result);
}

float Exponenciacao(float valor01, float valor02){
	float result = 0;
	
	result = pow(valor01, valor02);
	
	printf("Resultado => %.2f\n", result);
}

float Raiz(float valor01){
	float result = 0;
	
	result = sqrt(valor01);
	
	printf("Resultado => %.2f\n", result);
}





