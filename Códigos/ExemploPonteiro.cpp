#include <stdio.h>


main(){
	int x = 10;
	int * ponteiro;
	
	ponteiro = &x;
	
	printf("%p\n", &ponteiro);
	printf("%i\n", *ponteiro);
	printf("%i", &ponteiro);
}
