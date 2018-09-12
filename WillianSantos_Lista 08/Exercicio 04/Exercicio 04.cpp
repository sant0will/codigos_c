#include <stdio.h>

void Inserir(int insere);
void Remover(int remove);
int Imprimir (int imprime);
void Substituir(int substitui, int posSubstitui);
int vetor[20];
int i;
int j = 0;
int opcao;

main(){
	int insere;
	int remove;
	int imprime;
	int posSubstitui;
	int substitui;
	for(i = 0;;i++){
		printf("---------------------Menu--------------------\n");
		printf("1 - Inserir                       2 - Remover\n");
		printf("3 - Imprimir                   4 - Substituir\n");
		printf("                    5 - Sair                 \n");
		scanf("%i", &opcao);
		printf("\n");
	
		if (opcao == 1){
			printf("Qual o numero que deseja inserir: ");
			scanf("%i", &insere);
			printf("\n");
			Inserir(insere);
		
			}else if (opcao == 2){
				printf("Digite o numero a ser removido: ");
				scanf("%i", &remove);
				printf("\n");
				Remover(remove);
				
				}else if (opcao == 3){
					Imprimir(imprime);
			
					}else if (opcao == 4){
							printf("Digite a posicao a ser substituida: ");
							scanf("%i", &posSubstitui);
							printf("Digite o valor que  substituira: ");
							scanf("%i", &substitui);
							
							Substituir(substitui, posSubstitui);
				
						}else if (opcao == 5){
							printf("Ate maissss! ;)")
							break;
						
							}else{
								printf("Opcao invalida! Tente novamente.\n");
								printf("\n");
							}
	}
}

void Inserir(int insere){
	vetor[j] = insere;
	j++;
	printf("Inserido com sucesso!\n");
}

void Remover(int remove){
	int k;
	int x;
	for(k = 0; k < j; k++){
		if(remove == vetor[k]){
			for(x = k; x < j; x++){
				vetor[x] = vetor[x+1];	
			}
			j--;
			k--;	
		}
	}
	printf("Removido com sucesso!\n");
}

int Imprimir (int imprime){
	int x;
	for(x = 0; x < j; x++){
		printf("Posicao %i => %i \n", x+1, vetor[x]);
	}
}

void Substituir(int substitui, int posSubstitui){
	int k;
	for(k = 0; k < j; k++){
		if((posSubstitui-1) == k){
			vetor[k] = substitui;	
		}	
	}
	printf("Substituido com sucesso!\n");
}
	




