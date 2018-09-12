#include <stdio.h>

main(){
	float n1, n2, n3;
	float media;
	
	printf("Digite a nota 1:\n");
	scanf("%f", &n1);
	printf("Digite a nota 2:\n");
	scanf("%f", &n2);
	printf("Digite a nota 3:\n");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf("Media: %f\n", media);
	
	if(media >= 7){
		printf("Aprovado\n");
	}else if(media >= 5.5 && media < 7){
		printf("Exame\n");
	}else{
		printf("Reprovado");
	}
}
