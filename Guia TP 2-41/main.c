#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float centimetros = 0;
    float pulgadas = 0;
    int uno;

    //Inicio a programa
    printf("Programa conversor de centimetros a pulgadas INGRESE UNO para continuar:\n");
    scanf("%d", &uno);
    printf("\n");

    //Entrada cm
    printf("Ingrese centimetros:\n");
    scanf("%f", &centimetros);

    //Calculo
    pulgadas = centimetros *  0.39737;

    //Salida
    printf("\n");
    printf("%g centimetros son %g pulgadas", centimetros, pulgadas);
    printf("\n");
    printf("Gracias por utilizar nuestro conversor\n");

    return 0;
}
