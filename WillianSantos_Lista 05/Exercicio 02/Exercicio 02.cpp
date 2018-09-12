#include <stdio.h>


int i = 105;

main(){

	do{
		i -= 5;
		printf("=> %i\n", i);	
	}while(i > -100);
}
