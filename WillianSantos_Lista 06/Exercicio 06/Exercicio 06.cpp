#include <stdio.h>

/* Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, em um determinado dia. Para cada casa visitada 
 foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele naquela casa. Se a televisão estivesse 
 desligada, nada seria anotado, ou seja, esta casa não entraria na pesquisa. Faça um Programa que: 
 leia um número indeterminado de dados, isto é, o número do canal e o número de pessoas que estavam assistindo; 
 calcule e imprima a porcentagem de audiência em cada canal. Para encerrar a entrada de dados, digite o número do canal zero.
 */

int cont;
int canal;
int numPessoas;
int totalPessoas;
int somaCanal4;
int somaCanal5;
int somaCanal7;
int somaCanal12;

main(){

	for (cont = 1; cont++;){
		printf("Digite o canal: 4 - 5 - 7 - 12 \n");
		scanf("%i", &canal);
		
		if(canal <= 0){			
			printf("Porcentagem de audiencia: \n");
			printf("Canal 4: %f\n", (float)somaCanal4 / totalPessoas * 100);	
			printf("Canal 5: %f\n", (somaCanal5 / totalPessoas) * 100);	
			printf("Canal 7: %f\n", (somaCanal7 / totalPessoas) * 100);	
			printf("Canal 12: %f\n", (somaCanal12 / totalPessoas) * 100);	
			break;
		}
		
		printf("Digite o numero de pessoas assistindo: \n");
		scanf("%i", &numPessoas);
		
		totalPessoas += numPessoas;	
		
		if (canal == 4){
			somaCanal4 += numPessoas;
			printf("%i",somaCanal4);
		}else if (canal == 5){
					somaCanal5 += numPessoas;
				}else if (canal == 7){
							somaCanal7 += numPessoas;
						}else if (canal == 12){
									somaCanal12 += numPessoas;
								}
		
	}
}




