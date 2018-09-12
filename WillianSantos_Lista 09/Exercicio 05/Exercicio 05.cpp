#include <stdio.h>
#include <string.h>
#define MAX 5

// título, ano de edição, número de páginas e preço
struct Livro{
	char titulo[40];
	int ano;
	int numPag;
	float preco;
};	
	
main(){
	struct Livro l1[MAX];
	int i;
	float mediaPag;
	float menorPreco = 99999;
		
	for(i = 0; i < MAX;i++){
		printf("-Livro %i-\n",i+1);
		printf("Digite o titulo: ");
		scanf(" %[^\n]s", l1[i].titulo);
		
		printf("Digite o ano de publicacao: ");
		scanf("%i", &l1[i].ano);
		
		printf("Digite o numero de paginas: ");
		scanf("%i", &l1[i].numPag);
	
		printf("Digite o preco: ");
		scanf("%f", &l1[i].preco);
		
		if(menorPreco > l1[i].preco){
			menorPreco = l1[i].preco;
		}
				
		mediaPag += l1[i].numPag;
		
	}
	printf("\n");
	printf("Menor preco entre os livros: %f \n",menorPreco);
	printf("Media do numero de paginas dos livros: %f",(mediaPag/5));
	
}
