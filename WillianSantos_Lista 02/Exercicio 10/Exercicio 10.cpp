/*Fa�a um algoritmo para calcular e exibir do sal�rio l�quido de um professor, 
onde o n�mero de horas, o valor da hora e o percentual do INSS devem ser fornecidos pelo usu�rio:
salario_bruto <- num_hora_aula * valor_hora_aula e salario_liquido <- salario_bruto � (salario_bruto * percentual_INSS). */

#include <stdio.h>
#include <math.h>

main(){
	float numHoras;
	float valorHoras;
	float salarioBruto;
	float salarioLiquido;
	float percentualINSS;
	
	printf("Numero de horas trabalhadas: ");
	scanf("%f",&numHoras);
	
	printf("Valor das horas: ");
	scanf("%f",&valorHoras);
	
	printf("Percentual do INSS: ");
	scanf("%f",&percentualINSS);
	
	percentualINSS = percentualINSS / 100;
	salarioBruto = numHoras * valorHoras;
	salarioLiquido = salarioBruto - (salarioBruto * percentualINSS);
	
	printf("\n");
	printf("----------------------------------\n");
	
	printf("Numero de horas aula: %1.f \n",numHoras);
	printf("Valor por hora/aula: %1.f \n",valorHoras);
	printf("Percentual do INSS: %1.f \n",percentualINSS*100);
	printf("Salario Liquido: %1.f \n",salarioLiquido);
}
