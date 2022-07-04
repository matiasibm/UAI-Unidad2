#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float kilogramos = 0;
    float libras = 0;
    int uno;

    //Saludo
    printf("Programa conversor de kilogramos a libras INGRESE UNO para continuar:\n");
    scanf("%d", &uno);

    //Entrada kg
    printf("Ingrese kilogramos:\n");
    scanf("%f", &kilogramos);

    //Calculo
    libras = kilogramos * 2.2046;

    //Salida
    printf("\n");
    printf("%g kilogramos son %.2f libras\n", kilogramos, libras);
    printf("\n");

    return 0;
}
