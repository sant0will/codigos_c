//- Faça um algoritmo para calcular e exibir um salário reajustado em 23,75%. O salário atual deve ser fornecido pelo usuário.

#include <stdio.h>
#include <math.h>

main(){

float salarioAtual;
float salarioReajuste;

printf("Digite o salario do usuario: ");
scanf("%f", &salarioAtual);

salarioReajuste = salarioAtual * 1.2375;

printf("O salario reajustado: %.2f", salarioReajuste);
}
