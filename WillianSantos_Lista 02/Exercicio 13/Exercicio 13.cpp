/* Fa�a um algoritmo que receba do usu�rio uma quantidade de chuva dada em polegadas e exiba o equivalente em mil�metros (25,4 m = 1 polegada). */
  
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
