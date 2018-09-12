#include <stdio.h>
#include <string.h>


struct Produtos{
	char descricao[100];
	float valor;
};	
	
main(){
	struct Produtos p1[10];
	int i;
		
	for(i = 0; i < 10;i++){
		printf("Digite a descricao do produto %i: ",i+1);
		scanf(" %[^\n]s", p1[i].descricao);
	
		printf("Digite o valor do produto %i: \n",i+1);
		scanf("%f", &p1[i].valor);	
	}
	printf("\n");
	printf("\n");
	printf("-Dados dos produtos-\n");
	
	for(i = 9; i >= 0;i--){		
		printf("Descricao: %s \n", p1[i].descricao);
		printf("Valor: R$ %.2f\n", p1[i].valor);
		printf("\n");
	}
}
