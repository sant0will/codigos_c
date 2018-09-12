#include <stdio.h>

main(){
int repita;
int num;
int cont = 0;
float somaNum, contNum;

printf("Digite o numero de repeticoes: ");
scanf("%i", &repita);

	while(cont < repita){
		printf("Digite um numero inteiro: ");
		scanf("%i", &num);
		
		if (num % 2 == 0){
			somaNum += num;
			contNum++;
		}	
		cont++;
}

printf("Media dos numeros pares digitados: %f", somaNum/contNum);

}
