#include <stdio.h>

int idade;
int xp;
int sexo;
int contMasculino;
int contFeminino;
int somaIdadexp;
int contIdadexp;
int contIdade45;
int contIdade35;
int menorIdade = 110;


main(){

	do{
		printf("Digite a idade do funcionario: ");
		scanf("%i", &idade);
		
		if (idade == 0){
			printf("Numero de candidatos homens: %i\n", contMasculino);
			printf("Numero de candidatas mulheres: %i\n", contFeminino);
			printf("Media da idade de homens com experiencia: %i\n", somaIdadexp / contIdadexp);
			printf("Percentual de homens com mais de 45 anos: %i\n", (contIdade45 / contMasculino) * 100);
			printf("Mulheres com idade inferior a 35 anos e com experiencia: %i\n",  contIdade35);
			printf("Menor idade entre as mulheres que ja tem experiencia: %i\n", menorIdade);	
			 
			break;
		}
		
		printf("Digite o sexo: (1-Masculino / 2-Feminino) ");
		scanf("%i", &sexo);
		printf("Possui exepriencia: (1-Sim / 2-Nao)");
		scanf("%i", &xp);
		printf("\n");
		
		
		
		if (sexo == 1){
			contMasculino++;
			}else if (sexo == 2){
				contFeminino++;
			}
			
		if (sexo == 1 && xp == 1){
			somaIdadexp += idade;
			contIdadexp++;
		}
		
		if (idade > 45){
			contIdade45++;	
		}
		
		if (idade < 35 && xp == 1){
			contIdade35++;
		}
		
		if (menorIdade > idade && xp == 1 && sexo == 2){
			menorIdade = idade;
		}
		
		
		
	}while(1 != 0);
}
