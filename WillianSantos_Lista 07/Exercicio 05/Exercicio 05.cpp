#include <stdio.h>

main(){
	float altura[5];
	int idade[5];
	int i;
		
	for(i = 0; i < 5; i++){
		printf("Digite a %i idade:  \n",(i+1));
		scanf("%i", &idade[i]);
		printf("Digite a %i altura:  \n",(i+1));
		scanf("%f", &altura[i]);
		printf("\n");
	}

	for(i = 4; i >= 0; i--){
		printf("Idade %i ==> %i\n",(i+1) , idade[i]);
		printf("Altura %i ==> %f\n",(i+1) , altura[i]);
		printf("\n");
	}
}
