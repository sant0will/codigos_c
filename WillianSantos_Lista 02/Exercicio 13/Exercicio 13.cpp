/* Faça um algoritmo que receba do usuário uma quantidade de chuva dada em polegadas e exiba o equivalente em milímetros (25,4 m = 1 polegada). */
  
  #include <stdio.h>
  #include<math.h>
  
  main(){
  	float polegadas;
  	float milimetros;
  	
  	printf("Quantidade de chuva em polegadas: ");
  	scanf("%f",&polegadas);
  	
  	milimetros = polegadas * 25.4;
  	
  	printf("\n")
  	printf("Quantidade de chuvas em milimetros: %.2f",milimetros);	
  }
