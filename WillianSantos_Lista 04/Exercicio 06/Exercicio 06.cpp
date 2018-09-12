#include <stdio.h>

main(){
int n;
int a1;
int cont;
int razao;
int soma = 0;

	printf("Numero de termos da PA: \n");
	scanf("%i", &n);
	
	printf("Primeiro termo da PA: \n");
	scanf("%i", &a1);
	
	printf("Razao da PA: \n");
	scanf("%i", &razao);
	
	cont = 1;
	printf("(");
	while (cont <= n) {
		printf("%i ",a1);
		soma = soma + a1;
    	a1 = a1 + razao;
    	cont++;
	}
printf(")");	
printf("\n");
printf("Soma dos valores da PA: %i",soma); 	
}
