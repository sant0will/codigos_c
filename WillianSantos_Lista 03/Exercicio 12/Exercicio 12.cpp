#include <stdio.h>
#include <math.h>

main(){
	char nome[25];
	float salarioAtual;
	float aumento;
	float salarioNovo;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s", &nome);
	
	printf("Digite o salario atual: ");
	scanf("%f", &salarioAtual);
			

	if (salarioAtual >= 300 && salarioAtual <= 600) {
		aumento = salarioAtual * 0.11;
		printf("O funcionario %s teve aumento de R$%2.f e salario R$%.2f",nome,aumento,(salarioAtual+aumento));
	}else if (salarioAtual >= 600.01 && salarioAtual <= 900) {
		  	 aumento = salarioAtual * 0.12;
		  	 printf("O funcionario %s teve aumento de R$%2.f e salario R$%.2f",nome,aumento,(salarioAtual+aumento));
	 	}else if (salarioAtual >= 900.01 && salarioAtual <= 1500) {
				 aumento = salarioAtual * 0.06;
				 printf("O funcionario %s teve aumento de R$%2.f e salario R$%.2f",nome,aumento,(salarioAtual+aumento));
	 		}else if (salarioAtual >= 1500.01 && salarioAtual <= 2000) {
				 	aumento = salarioAtual * 0.03;
				 	printf("O funcionario %s teve aumento de R$%2.f e salario R$%.2f",nome,aumento,(salarioAtual+aumento));
		}else if (salarioAtual >= 2000.01){
			printf("O funcionario %s se mantera com o salario R$%.2f",nome,salarioAtual);
		}
	 				 			
	
}
