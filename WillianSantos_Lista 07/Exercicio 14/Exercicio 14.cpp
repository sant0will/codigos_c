#include <stdio.h>
#include <string.h>

char matriz[10][10][2];
char gabarito[10][2];
int i;
int j;
int resultado[10];
	
main(){
	for (i = 0; i < 10; i++){
			printf("Gabarito - Digite a questao numero %i =>  ",i+1);
			scanf("%s", &gabarito[i]);
	}
	
	printf("\n");
		
	for(i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("Digite a resposta do aluno %i para questao %i => ",i+1,j+1);
			scanf("%s", &matriz[i][j]);
		}	
		printf("\n");
	}
	
	for(i = 0; i < 10; i++){
		printf("Aluno %i\n",i);
		for (j = 0; j < 10; j++){
			if(!strcmp(matriz[i][j], gabarito[j])){
				printf("Questao %i = Correta! \n",j+1);
				resultado[i]++;
				}else{
					printf("Questao %i = Incorreta! \n", j+1);
			}
		}
		printf("\n");		
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("Nota do aluno %i = %i\n",i,resultado[i]);	
	}
}
