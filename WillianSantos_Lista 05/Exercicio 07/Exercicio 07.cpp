#include <stdio.h>

float salarioBruto;
int numHoras;
float salarioLiquido = 0;
float somaSalario;
float valorHoras;

main(){

	do{
		printf("Digite o salario bruto: ");
		scanf("%f", &salarioBruto);
		
		if (salarioBruto == 0){
			printf("A soma total dos salarios: %f", somaSalario);
			break;
		} 
		
		printf("Numero de horas trabalhadas:  ");
		scanf("%i", &numHoras);
		
		if (numHoras >= 160){
			valorHoras = salarioBruto / numHoras;
			salarioLiquido = salarioLiquido + (valorHoras  * ((numHoras - 160) * 1.5));	
		}
		
		if (salarioBruto < 800.00){
			salarioBruto = salarioBruto;
		}else if (salarioBruto >= 800.00 && salarioBruto <= 1600.00){
			salarioBruto = salarioBruto - (salarioBruto * 0.13);
		}else if (salarioBruto > 1600.00){
			salarioBruto = salarioBruto - (salarioBruto * 0.22);
		}
		
		salarioLiquido = salarioLiquido + salarioBruto;
		somaSalario += salarioLiquido;
		
		printf("O salario liquido do funcionarios: %.2f \n", salarioLiquido );
		printf("\n");
	}while(1 != 0);
}
