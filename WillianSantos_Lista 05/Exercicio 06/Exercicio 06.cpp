#include <stdio.h>
 
 float paisA = 90;
 float paisB = 140;
 int cont = 0;

main(){

	do{
		paisA = paisA + (paisA * 0.035);
		paisB = paisB + (paisB * 0.010);
		cont++;
	}while(paisA <= paisB);
	printf("Serao necessarios %i anos!", cont);
	
	
}
