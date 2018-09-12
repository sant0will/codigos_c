#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
	
	char cidade01[25];
	char cidade02[25];
	char cidade03[25];
	char cidade04[25];
	char cidade05[25];
	float media01, media02, media03, media04, media05, mediaGeral;
	int numInferior = 0;
	
	printf("Digite o nome da cidade 01: \n");
	scanf("%s", &cidade01);
	
	printf("Digite a media de temparatura da cidade 01: \n");
	scanf("%f", &media01);
	
	printf("Digite o nome da cidade 02: \n");
	scanf("%s", &cidade02);
	
	printf("Digite a media de temparatura da cidade 02: \n");
	scanf("%f", &media02);
	
	printf("Digite o nome da cidade 03: \n");
	scanf("%s", &cidade03);
	
	printf("Digite a media de temparatura da cidade 03: \n");
	scanf("%f", &media03);
	
	printf("Digite o nome da cidade 04: \n");
	scanf("%s", &cidade04);
	
	printf("Digite a media de temparatura da cidade 04: \n");
	scanf("%f", &media04);
	
	printf("Digite o nome da cidade 05: \n");
	scanf("%s", &cidade05);
	
	printf("Digite a media de temparatura da cidade 05: \n");
	scanf("%f", &media05);
	
	mediaGeral = (float) (media01 + media02 + media03 + media04 + media05) / 5;
	
	if (media01 < 10){
		numInferior = numInferior + 1;
	}
		if (media02 < 10){
			numInferior = numInferior + 1;
		}
			if (media03 < 10){
				numInferior = numInferior + 1;
			}
				if (media04 < 10){
					numInferior = numInferior + 1;
				}
					if (media05 < 10){
						numInferior = numInferior + 1;
					}
					
	
	if (media01 > 30){
		strcpy(cidade01, cidade01);
		}else{
		strcpy(cidade01, "");
	}
	
	if (media02 > 30){
		strcpy(cidade02, cidade02);
		}else{
		strcpy(cidade02, "");
	}
	
	if (media03 > 30){
		strcpy(cidade03, cidade03);
		}else{
		strcpy(cidade03, "");
	}
			
	if (media04 > 30){
		strcpy(cidade04, cidade04);
		}else{
		strcpy(cidade04, "");
	}
					
	if (media05 > 30){
		strcpy(cidade05, cidade05);
		}else{
		strcpy(cidade05, "");
	}
					
	
	printf("Media da regiao: %.f \n", mediaGeral,"C");
	printf("Quantidade de cidades com media menor que 10C: %i \n", numInferior);
	printf("Cidades com temperatura media maior que 30C: %s %s %s %s %s \n",cidade01, cidade02, cidade03, cidade04, cidade05);
	
	
}
