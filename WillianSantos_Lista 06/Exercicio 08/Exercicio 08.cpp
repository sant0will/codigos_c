#include <stdio.h>

 float saldo = 0;
 float saque;
 float deposito;
 int i;
 int opcao;

main(){
	
	for(i = 1; i++;){
	
    	printf("\n");
      printf(" ------------- Menu --------------\n");
      printf(" |#|  1-Saldo         2-Saque  |#| \n ");
      printf("|#|  3-Deposito      4-Sair   |#| \n ");
      printf("---------------------------------\n");
      printf("Opcao ->  ");
      scanf("%i",&opcao);
      

      if(opcao == 1){
         printf("Saldo: R$%.2f\n",saldo);
		}else if(opcao == 2){
            printf("Valor do Saque: ");
            scanf("%f", &saque);
            saldo -= saque;
            printf("Saldo Atualizado: R$%.2f\n",saldo);
        }else if (opcao == 3){
               printf("Valor do Deposito: ");
               scanf("%f", &deposito);
               saldo += deposito;
               printf("Saldo Atualizado: R$%.2f\n",saldo);
            }else if (opcao == 4){
                  break;
                }
	}
}
