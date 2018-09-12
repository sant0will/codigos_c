#include <stdio.h>
#include <math.h>

main(){
	float salarioMinimo;
	float salarioMensal;
	float CPF;
	float imposto;
	int numDependentes;
	
	printf("Digite o salario minimo: ");
	scanf("%f", &salarioMinimo);
	
	printf("Digite a renda mensal: ");
	scanf("%f", &salarioMensal);
	
	printf("Digite o CPF: ");
	scanf("%f", &CPF);

	printf("Digite a quantidade de filhos: ");
	scanf("%i", &numDependentes);
	
	if (numDependentes = 1) {
		salarioMinimo = salarioMinimo - (salarioMinimo * 5 / 100);
	}else 
		if (numDependentes = 2) {
			salarioMinimo = salarioMinimo - (salarioMinimo * 10 / 100);
		}else
			if (numDependentes = 3) {
				salarioMinimo = salarioMinimo - (salarioMinimo * 15 / 100);
			}
			

	if (salarioMensal >= (salarioMinimo * 2) && salarioMensal < (salarioMinimo * 3)) {
		imposto = salarioMensal * 0.05;
	}else if (salarioMensal >= (salarioMinimo * 3) && salarioMensal < (salarioMinimo * 5)) {
	 		imposto = salarioMensal * 0.10;
	 	}else if (salarioMensal >= (salarioMinimo * 5) && salarioMensal < (salarioMinimo * 7)) {
	 	    	imposto = salarioMensal * 0.15;
	 		}else if (salarioMensal >= (salarioMinimo * 7)) {
	 				imposto = salarioMensal * 0.20;
	 			}
	 			
	 			
	printf("A pessoa %.1f pagara: %1.f",CPF,imposto);
}
