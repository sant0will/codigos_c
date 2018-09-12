#include <stdio.h>
#include <string.h>


struct DadosAlunos{
	int idade;
	float media;
};	
	
main(){
	struct DadosAlunos a1[10];
	int i;
	float mediaGeral;
		
	for(i = 0; i < 10;i++){
		printf("Digite a idade do aluno %i: ",i+1);
		scanf("%i", &a1[i].idade);
	
		printf("Digite a media do aluno %i: ",i+1);
		scanf("%f", &a1[i].media);
		
		printf("\n");	
		
		mediaGeral += a1[i].media;
	}
	printf("\n");
	printf("\n");

	
	for(i = 0; i < 10;i++){		
		printf("Aluno %i \n",i+1);
		printf("Idade: %i \n", a1[i].idade);
		printf("Media: R$ %.2f\n", a1[i].media);
		printf("\n");
	}
	printf("Media geral da turma: %f",(mediaGeral/10));
	
}
