#include <stdio.h>


main(){
	int num;
	int valor;
	int *p;
	
	num = 55;
	p = &num; //Pega o endereco de num
	valor = *p; //Valor é igualado a num de uma maneira indireta
	printf("%i \n",valor);
	printf("Endereco  para onde o ponteiro aponta: %p \n",p);
	printf("Valor da variavel apontada: %i \n",*p);
}
