/*  Fa�a um algoritmo para calcular e exibir o valor de uma presta��o em atraso. prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso),
 taxa � o percentual de juros por dia, num_dias_atraso � o n�mero de dias em atraso e presta��o � o valor da presta��o normal. O valor da presta��o,
  a taxa e o n�mero de dias em atraso devem ser fornecidos pelo usu�rio. */
  
  #include <stdio.h>
  #include<math.h>
  
  main(){
  	float prestacao;
  	float prestacaoAtrasada = 0;
  	float taxa;
  	int numDias;
  	
  	printf("Valor da Prestacao: ");
  	scanf("%f",&prestacao);
  	
  	printf("Valor da taxa: ");
  	scanf("%f",&taxa);
  	
  	printf("Numero de dias de atraso: ");
  	scanf("%i",&numDias);
  	
  	taxa = taxa / 100;
  	
  	prestacaoAtrasada = (float)prestacao + (prestacao*taxa*numDias);
  	
  	printf("Valor da prestacao atrasada: %.2f",prestacaoAtrasada);	
  }
