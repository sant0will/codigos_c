#include <stdio.h>

int idade;
int cont;
int cont1;
int cont2;
int cont3;
int cont4;
int cont5;


main(){

	for (cont = 1 ; cont <= 15 ; cont++){
		printf("Digite uma idade: \n");
		scanf("%i", &idade);
		
		if (idade >= 1 && idade <= 15){
			cont1++;
		}else   if (idade >= 16 && idade <= 30){
					cont2++;
				}else 	if (idade >= 31 && idade <= 45){
							cont3++;
						}else 	if (idade >= 46 && idade <= 60){
									cont4++;
								}else 	if (idade > 61){
											cont5++;
										}
	}
	printf("Quantidade de pessoas\n"); 
	printf("1 a 15 anos: %i \n", cont1);
	printf("16 a 30 anos: %i \n", cont2);
	printf("31 a 45 anos: %i \n", cont3);
	printf("46 a 60 anos: %i \n", cont4);
	printf("Mais de 61 anos: %i \n", cont5);
	printf("\n");
	printf("\n");
	printf("Porcentagem de pessoas\n");
	printf("1 a 15 anos: %i \n", (cont1  * 100) / 15);
	printf("16 a 30 anos: %i \n", (cont2  * 100) / 15);
	printf("31 a 45 anos: %i \n", (cont3  * 100) / 15);
	printf("46 a 60 anos: %i \n", (cont4  * 100) / 15);
	printf("Mais de 61 anos: %i \n", (cont5  * 100) / 15);
}




