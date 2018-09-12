#include <stdio.h>
#include <math.h>

main(){
	float n1;
	float n2;
	float media;
	
	printf("Escreva a nota 01: ");
	scanf("%f", &n1);
	
	printf("Escreva a nota 02: ");
	scanf("%f", &n2);
	
	media = (float)(n1 + n2) / 2;
	
	if (media >= 7){
		printf("Aluno aprovado com media %.2f!",media);
	}else
	if(media < 7){
		printf("Aluno reprovado com media %.2f!",media);
	}	
}
