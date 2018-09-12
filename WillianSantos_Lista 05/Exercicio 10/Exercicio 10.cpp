#include <stdio.h>
#include <string.h>

int cont = 1;
float nota1;
float nota2;
float media;
char situacao[40];
int contR;
int contA;
int contE;
float contMedia;

main(){

	do{
		printf("Digite a nota01 do aluno %i: ", cont);
		scanf("%f", &nota1);
		printf("Digite a nota02 do aluno %i: ", cont);
		scanf("%f", &nota2);
		printf("\n");
		
		media = (nota1 + nota2) / 2;
		contMedia += media;
		
		if(media <= 5.0){
				strcpy(situacao, "Reprovado!");	
				contR++;
			}else if(media >= 5.1 && media <= 6.9){
					strcpy(situacao, "Em exame!");	
					contE++;
					}else if(media >= 7.0){
							strcpy(situacao, "Aprovado!");
							contA++;	
						}
		
		printf("A media do aluno %i: %.2f = > %s\n",cont, media, situacao);
		printf("\n");
		cont++;
	}while(cont <= 6);
	printf("Media geral da turma: %f\n", contMedia / 6);
	printf("Total de alunos aprovados: %i\n", contA);
	printf("Total de alunos em exame: %i\n", contE);
	printf("Total de alunos reprovados: %i\n", contR);
}
