#include <stdio.h>

int i = 1;
int num;
int pares, impares, positivos, negativos;

main(){

	do{
		printf("Digite um numero: \n");	
		scanf("%i", &num);
		
		if(num > 0){
			positivos++;
		}else if(num < 0){
			negativos++;
		}
		
		if (num % 2 == 0){
			pares++;
		}else{
			impares++;
		}
		
		i++;
	}while(i <= 5);
	
	printf("Pares: %i \n",pares);	
	printf("Impares: %i \n",impares);
	printf("Positivos: %i \n",positivos);
	printf("Negativos: %i \n",negativos);
}
