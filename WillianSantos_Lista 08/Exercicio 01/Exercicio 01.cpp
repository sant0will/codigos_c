#include <stdio.h>
#include <string.h>

void Buscar(char* busca);
char nomes[100][15];
int i;

main(){
	char busca[15];
	for(i = 0;;i++){
		printf("Digite um nome pra posicao %i - (Digite f para finalizar!) =>\n",i+1);
		scanf("%s", &nomes[i]);
		
		if(!strcmp (nomes[i],"f")){
			break;
		}
	}
	printf("Digite um nome pra ser procurado: \n");
	scanf("%s", &busca);
	
	Buscar(busca);	
	printf("Finalizando...");
}

void Buscar(char* busca){
	int j;
	int flag = 0;
	for(j = 0;j < i; j++){
		if(!strcmp(busca,nomes[j])){
			printf("O nome foi encontrado na posicao %i!\n",(j+1));
			flag = 1;
		}
	}
	if (flag == 0){
		printf("Nome nao foi encontrado!\n");
	}	
}


