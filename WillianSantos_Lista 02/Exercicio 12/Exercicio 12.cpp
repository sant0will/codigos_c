/* Fa�a um algoritmo que calcule a m�dia de quatro n�meros inteiros. Os n�meros devem ser dados pelo usu�rio */
  
  #include <stdio.h>
  #include<math.h>
  
  main(){
  	int n1, n2, n3 ,n4;
  	float media;
  	
  	printf("Numero 01: ");
  	scanf("%i",&n1);
  	
  	printf("Numero 02: ");
  	scanf("%i",&n2);
  	
  	printf("Numero 03: ");
  	scanf("%i",&n3);
  	
  	printf("Numero 04: ");
  	scanf("%i",&n4);
  	
  	media = (float)(n1 + n2 + n3 + n4)/4;
  	
  	printf("A media dos 4 numeros: %f",media);	
  }
