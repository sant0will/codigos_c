#include <stdio.h>
#include <string.h>
#define MAX 500

// idade, sexo, salário e número de filhos
struct Pessoas{
	char sexo[2];
	int idade;
	int numFilhos;
	float salario;
};	
	
main(){
	struct Pessoas p1[MAX];
	int i;
	float MediaSalarial;
		
	for(i = 0; i < MAX;i++){
		printf("-Pessoa %i-\n",i+1);
		printf("Digite a idade: ");
		scanf("%i", &p1[i].idade);
				
		printf("Digite o sexo: m - Masculino / f - Feminino: ");
		scanf(" %[^\n]s", p1[i].sexo);
		
		printf("Digite o numero de filhos: ");
		scanf("%i", &p1[i].numFilhos);
	
		printf("Digite o salario: ");
		scanf("%f", &p1[i].salario);
		
		MediaSalarial += p1[i].salario;
		
	}
	printf("\n");
	printf("Media salarial dos habitantes: \n");
	printf("%.2f",(MediaSalarial/MAX));
	
}
