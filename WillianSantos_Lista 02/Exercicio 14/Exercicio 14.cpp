/*  Faça um algoritmo que lê o nome de um vendedor, lê o salário fixo do vendedor, 
lê o total (em reais) de vendas por ele efetuadas e lê o percentual que ganha sobre o total de vendas.
O algoritmo deve calcular o salário total do vendedor e exibir, ao final, a seguinte frase:
O vendedor <nome do vendedor> recebeu <salario total> reais.
 */
  
  #include <stdio.h>
  #include<math.h>
  
  main(){
  	char nome[50];
  	float salarioFixo, salarioTotal;
  	float totalVendas;
  	float percentual;
  	
  	printf("Nome do vendedor: ");
  	scanf("%s", &nome);
  	
  	printf("Salario fixo do vendedor: ");
  	scanf("%f", &salarioFixo);
  	
  	printf("Total de vendas do vendedor: ");
  	scanf("%f", &totalVendas);
  	
  	printf("Percentual sobre as vendas: ");
  	scanf("%f", &percentual);
  	
  	percentual = percentual / 100;
  	salarioTotal = salarioFixo + (totalVendas * percentual);
  	
  	printf("\n");
  	printf("O vendedor %s recebeu: R$%.2f",nome,salarioTotal);	
  }
