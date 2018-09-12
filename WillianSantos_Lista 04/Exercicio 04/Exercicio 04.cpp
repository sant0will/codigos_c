#include <stdio.h>

main(){
int cont = 1;
int limite; 
int total;

printf("Digite o numero limite do culculo: \n");
scanf("%i" , &limite);

	while (cont <= limite) {
         total = total + (1/cont);
         cont = cont + 1;
	}

printf("Valor total do calculo: %i ",(total+1)); 	

}
