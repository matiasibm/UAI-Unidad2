#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    float costoTotal = 0;

    //Entrada H , M , S
    printf("Ingrese las horas: ");
    scanf("%i", &horas);

    printf("Ingrese los minutos: ");
    scanf("%i", &minutos);

    printf("Ingrese los segundos: ");
    scanf("%i", &segundos);

    //Calculo total
    costoTotal = (((horas * 3600) + (minutos * 60) + segundos )* 0.25);

    //Salida
    printf("El costo total de proceso es de $%.2f", costoTotal);

    return 0;
}
