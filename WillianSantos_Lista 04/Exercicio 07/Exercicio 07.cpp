#include <stdio.h>

main(){
int candidato01=0;
int candidato02=0;
int candidato03=0;
int candidato04=0;
int nulo=0;
int branco=0;
int opcao;


	while(opcao != 0){
	printf("\n");
	printf("| 1 - Candidato01 | 2 - Candidato02 | 3 - Candidato03 |\n");
	printf("| 4 - Candidato04 |    5 - Nulo     |    6 - Branco   |\n");
	printf("0 - Para finalizar!\n");
	printf("\n");
	scanf("%i", &opcao);
	
	if(opcao == 1){
		candidato01++;
	}else if(opcao == 2){
			candidato02++;
		}else if(opcao == 3){
				candidato03++;
				}else if(opcao == 4){
						candidato04++;
					}else if(opcao == 5){
							nulo++;
						}else if(opcao == 6){
								branco++;
							}else if(opcao == 0){
									break;
						}
	}
	printf("Votos candidato 01: %i\n",candidato01);
	printf("Votos candidato 02: %i\n",candidato02);
	printf("Votos candidato 03: %i\n",candidato03);
	printf("Votos candidato 04: %i\n",candidato04);
	printf("Votos nulos: %i\n",nulo);
	printf("Votos brancos: %i\n",branco);
}
