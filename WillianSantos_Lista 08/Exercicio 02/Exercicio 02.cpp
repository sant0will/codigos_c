#include <stdio.h>

int Buscar(int busca);
int numeros[100];
int i;


main(){
	int busca;
	int result = 0;
	for(i = 0;;i++){
		printf("Digite o numero da posicao %i - (Digite 0 para finalizar!) =>\n",i+1);
		scanf("%i", &numeros[i]);
		
		if(numeros[i] == 0){
			break;
		}
	}

	printf("Digite o numero a ser buscado: ");
	scanf("%i", &busca);
	
	result = Buscar(busca);
	
	if(result == 0){
		printf("Numero nao foi encontrado!");
	}else{
		printf("Numero encontrado %i vez(es)!", result);
	}
}

int Buscar(int busca){
	int j;
	int cont = 0;
	printf("%i\n",busca);
	for(j = 0; j < i; j++){
		if(busca == numeros[j]){
			cont++;			
		}
	}
	return cont;
}
