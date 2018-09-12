#include <stdio.h>
#include <string.h>
#define MAX 5

struct Pessoas{
	char nome[20];
	char sexo[15];
	float salario;
};	
	
main(){
	struct Pessoas p1[MAX];
	int i;
	float maior = 0;
	int posicao = 0;
	
	
	for(i = 0; i < MAX;i++){
		printf("Digite o nome da pessoa:  - ");
		scanf(" %[^\n]s", p1[i].nome);
	
		printf("Digite o sexo da pessoa: m - Masculino / f - Feminino  - ");
		scanf(" %[^\n]s", p1[i].sexo);
	
		printf("Digite o salario da pessoa:  - ");
		scanf("%f", &p1[i].salario);
	
		if(p1[i].salario > maior){
			posicao = i;
			maior = p1[i].salario;
		}
		
		if(!strcmp(p1[i].sexo, "m")){
			strcpy(p1[i].sexo, "Masculino");
		}else{
			strcpy(p1[i].sexo, "Feminino");
		}
	
		printf("\n");
		printf("\n");	
	}
	printf("-Dados da pessoa com maior salario-\n");	
	printf("Nome: %s \n", p1[posicao].nome);
	printf("Sexo: %s \n", p1[posicao].sexo);
	printf("Salario: R$ %.2f", p1[posicao].salario);
}
