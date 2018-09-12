#include <stdio.h>
#include <math.h>

main(){
char nome[20];
float dist;
float temp;
float velmed;

printf ("Digite o nome do piloto:\n ");
scanf ("%s", &nome);

printf ("Digite a distancia percorrida por %s (KM):\n ",nome);
scanf ("%f", &dist);

printf ("Digite o tempo gasto para percorrer (horas):\n ");
scanf ("%f", &temp);

velmed=dist/temp;

printf ("A velocidade media do %s foi %.2f KM/h: ",nome,velmed);
}
