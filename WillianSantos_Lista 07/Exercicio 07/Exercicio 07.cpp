#include <stdio.h>
#include <string.h>

float nota[40];
char nome[40][10];
int i;
int j;
int n;
float maiorNota = 0;
float menorNota = 11;
char maiorNome[40];
char menorNome[40];
	
main(){
	printf("Digite o numero de alunos: ");
	scanf("%i", &n);
		
	for(i = 0; i < n; i++){
		printf("Digite o nome do aluno %i:  \n",(i+1));
		scanf("%s", &nome[i]);
		for (j = 0; j < 3; j++){
			printf("Digite a %i nota:  \n",(j+1));
			scanf("%f", &nota[j]);
			
			if(nota[j] > maiorNota){
				maiorNota = nota[j];
				strcpy(maiorNome, nome[i]);
			}
			if(nota[j] < menorNota){
				menorNota = nota[j];
				strcpy(menorNome, nome[i]);
			}
		}	
		printf("\n");
	}
	
	printf("----- Maior -----\n");
	printf("Nome => %s\n", maiorNome);
	printf("Nota => %.2f", maiorNota);
	printf("\n");
	printf("\n");
	printf("----- Menor -----\n");
	printf("Nome => %s\n", menorNome);
	printf("Nota => %.2f", menorNota);
}
