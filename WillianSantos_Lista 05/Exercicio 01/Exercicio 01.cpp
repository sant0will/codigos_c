#include <stdio.h>

int soma;
int i = 0;

main(){

do{
	i++;
	soma += i;	
}while(i < 100);
printf("Soma dos primeiro 100 naturais: %i", soma);
}
