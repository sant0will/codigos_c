#include <stdio.h>

main(){
float media;
float salario;
int numFilhos;
float contSalario = 0;
float contPopulacao = 0;
float contNumFilhos = 0;
int contSalario100 = 0;
float maiorSalario = 0;

	while(1 != 0){
	printf("Numero de filhos: -1 para Finalizar \n");
	scanf("%i", &numFilhos);	
	
	if(numFilhos == -1){
		printf("Media do salario da populacao: R$%.2f\n",contSalario/contPopulacao);
		printf("Media de filhos: %.f\n",contNumFilhos/contPopulacao);
		printf("Maior salario: R$%.2f\n",maiorSalario);
		printf("Percentual de pessoas com salario ate R$ 100,00: %.f\n",(contSalario100 / contPopulacao) * 100,"\%");
		break;
	}
	
	printf("Salario da casa: \n");
	scanf("%f", &salario);
	if(salario <= 100){
		contSalario100 += 1;
	}
	
	contSalario += salario;
	
	if(maiorSalario <= salario){
		maiorSalario = salario;
	}
	
	contNumFilhos += numFilhos; 
	
	contPopulacao++;
	}
}
