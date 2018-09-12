#include <stdio.h>
#include <string.h>

int matriz[7][7];
int i;
int j;
char origem[40];
char destino[40]
	
main(){		
	for(i = 0; i < 7; i++){
		for (j = 0; j < 7; j++){
			printf("Digite o tempo da posicao [%i,%i]",i,j);
			scanf("%i", &matriz[i][j]);
		}	
		printf("\n");
	}
	
	printf("Digite o ponto de origem! (a/b/c/d/e/f/g)");
	scanf("%s", &origem);
	printf("Digite o ponto de destino! (a/b/c/d/e/f/g)");
	scanf("%s", &destino);
	
	if(!strcmp(origem,destino)){
		break;
	}
	
	
	
}
