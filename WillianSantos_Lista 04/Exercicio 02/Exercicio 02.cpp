#include <stdio.h>

main(){
	int numVezes;
	int numTabuada;
	int cont = 1;
	
	printf("Digite a tabuada que deseja:\n");
	scanf("%i", &numTabuada);
	
	printf("Digite ate que numero deseja:\n");
	scanf("%i", &numVezes);
	
	while (cont <= numVezes){
		printf("Resultado (%i x %i) =>  %i \n",numTabuada,cont,(numTabuada * cont));
		cont++;
	}	
}
