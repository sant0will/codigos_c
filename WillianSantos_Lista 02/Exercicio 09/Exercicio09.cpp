//- Fa�a um algoritmo para calcular e exibir um sal�rio reajustado em 23,75%. O sal�rio atual deve ser fornecido pelo usu�rio.

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
