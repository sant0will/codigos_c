#include <stdio.h>
#include <math.h>

main(){
	int timeA;
	int timeB;
	
	printf("Digite a quantidade de gols do time A: ");
	scanf("%i", &timeA);

	printf("Digite a quantidade de gols do time B: ");
	scanf("%i", &timeB);
	
	if (timeA > timeB) {
			printf("Time A ganhou: %i x %i",timeA, timeB);
	}else
	if (timeB > timeA){
			printf("Time B ganhou: %i x %i",timeB, timeA);
	}else{
		printf("Jogo empatou: %i x %i",timeB, timeA);
	}
}
