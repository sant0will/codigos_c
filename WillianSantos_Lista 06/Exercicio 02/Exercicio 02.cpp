#include <stdio.h>

int idade;
float peso;
int cont;
int cont1;
int cont2;
int cont3;
int cont4;
float somapeso1;
float somapeso2;
float somapeso3;
float somapeso4;


main(){

	for (cont = 1 ; cont <= 15 ; cont++){
		printf("Digite uma idade: \n");
		scanf("%i", &idade);
		printf("Digite um peso: \n");
		scanf("%f", &peso);
		
		printf("\n");
		
		if (idade >= 1 && idade <= 10){
			somapeso1 += peso;
			cont1++;
		}else   if (idade >= 11 && idade <= 20){
					somapeso2 += peso;
					cont2++;
				}else 	if (idade >= 21 && idade <= 30){
							somapeso3 += peso;
							cont3++;
						}else 	if (idade > 31){
									somapeso4 += peso;
									cont4++;
									}
	}
	printf("Media de pesos por faixa etaria\n");
	printf("1 - 10 anos: %f\n",somapeso1 / cont1);
	printf("11 - 20 anos: %f\n",somapeso2 / cont2);
	printf("21 - 30 anos: %f\n",somapeso3 / cont3);
	printf("Maiores que 31 anos: %f",somapeso4 / cont4);
}




