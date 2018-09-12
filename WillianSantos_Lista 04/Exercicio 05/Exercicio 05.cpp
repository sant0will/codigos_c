#include <stdio.h>

main(){
int cont = 0;
float joao = 1.50; 
float ze = 1.10;

	while (ze <= joao) {
         ze += 0.03;
         joao += 0.02;
         cont++;
	}

printf("Serao necessarios %i anos!",cont); 	
}
