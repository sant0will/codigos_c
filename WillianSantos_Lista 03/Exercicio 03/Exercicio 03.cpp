#include <stdio.h>
#include <math.h>

main(){
	float idade;
	
	printf("Escreva a idade: ");
	scanf("%f", &idade);
	
	
	if (idade >= 16){
		printf("Essa pessoa podera votar!");
	}else{
		printf("Essa pessoa nao podera votar!");
	}
}
