#include <stdio.h>

int ponto;
int jogador1;
int jogador2;

main(){

	do{
		printf("Placar => Jogador 1 x Jogador 2 \n ");
		printf("             %i     x    %i \n ", jogador1, jogador2);
		scanf("%i",&ponto);
		
		if (ponto == 1){
			jogador1++;
		}else if(ponto ==2){
			jogador2++;
		}else{
			printf("Valor invalido! \n");
		}
	}while(((jogador1 < 3) || (jogador1 < jogador2 + 2)) && ((jogador2 < 3) || (jogador2 < jogador1 + 2)));
	
	printf("Placar Final => Jogador 1 %i x Jogador 2 %i \n ", jogador1, jogador2);
	
	if (jogador1 > jogador2){
		printf("Jogador 1 venceu!");
	}else{
		printf("Jogador 2 venceu!");
	}

}
