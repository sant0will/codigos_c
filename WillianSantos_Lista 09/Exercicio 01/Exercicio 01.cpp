#include <stdio.h>
#include <string.h>

struct Pessoas{
	char sexo[2];
	int idade;
	float salario;
};

main(){
	struct Pessoas p1;
	
	printf("Digite o sexo da pessoa: m - Masculino / f - Feminino\n");
	scanf(" %[^\n]s", p1.sexo);
	
	printf("Digite a idade da pessoa:\n");
	scanf("%i", &p1.idade);
	
	printf("Digite o salario da pessoa:\n");
	scanf("%f", &p1.salario);
	
	printf("\n");
	printf("\n");	
	
	if(!strcmp(p1.sexo, "m")){
		printf("Sexo: Masculino\n");
	}else{
		printf("Sexo: Feminino\n");
	}
	
	printf("Idade: %i anos \n", p1.idade);
	printf("Salario: R$ %.2f", p1.salario);
}
