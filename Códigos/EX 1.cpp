#include <stdio.h>
#include <stdlib.h>

main(){
	int i;
	int j;
	int vetor01[10];
	int vetor02[10];
	int vetor03[20];
	
	for(i = 0;i < 10; i++){
		vetor01[i] = rand()%30;
		vetor02[i] = rand()%30;
	}
	
	for(i = 0;i < 10; i++){
		vetor03[j] = vetor01[i];
		j++;
		vetor03[i] = vetor02[i];
		j++;
	}
	
	for(j = 0;j < 20; j++){
		printf("Posicao %i => %i \n",j,vetor03[j]);
	}
	
}
