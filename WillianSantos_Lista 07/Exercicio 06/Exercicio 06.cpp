#include <stdio.h>

main(){
	int vetor01[10];
	int vetor02[10];
	int vetor03[20];
	int j = 0;
	int i;
		
	for(i = 0; i < 10; i++){
		printf("Digite um numero da posicao %i do vetor 01:  \n",(i+1));
		scanf("%i", &vetor01[i]);
	}
	
	for(i = 0; i < 10; i++){
		printf("Digite um numero da posicao %i do vetor 02:  \n",(i+1));
		scanf("%i", &vetor02[i]);
	}
	
	for(i = 0; i < 10; i++){
		vetor03[j] = vetor01[i];
		j++;
		vetor03[j] = vetor02[i];
		j++;
	
	}
	
	for(j = 0; j < 20; j++){
		printf("Posicao %i ==> %i\n",(j+1) , vetor03[j]);
	}
}
