#include <stdio.h>

void Remover(int remove);
int numeros[100];
int i;

main(){
	int remove;
	for(i = 0;;i++){
		printf("Digite o numero da posicao %i - (Digite 0 para finalizar!) =>\n",i+1);
		scanf("%i", &numeros[i]);
		
		if(numeros[i] == 0){
			break;
		}
	}
	
	printf("Digite o numero a ser removido: ");
	scanf("%i", &remove);
	
	Remover(remove);
}

void Remover(int remove){
	int j;
	int x;
	for(j = 0; j < i; j++){
		if(remove == numeros[j]){
			for(x = j; x < i; x++){
				numeros[x] = numeros[x+1];	
			}
			i--;
			j--;	
		}
	}
	
	
	for(j = 0; j < i; j++){
		if(numeros[j] != 0){
			printf("Posicao %i ==> %i \n", j + 1, numeros[j]);		
		}
		
	}	
}
