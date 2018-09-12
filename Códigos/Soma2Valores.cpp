#include <stdio.h>


int main(){
    int n1; 
    int n2;
    int soma = 0;
    
    printf("Escreva um numero: ");
    scanf("%i", &n1);
    printf("Escreva um numero: ");
    scanf("%i", &n2);
    
    soma = n1 + n2;
    
    printf("A soma dos numeros %i e %i: %i", n1, n2, soma);
    }
    
