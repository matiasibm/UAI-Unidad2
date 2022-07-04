#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float metros = 0;
    float centimetros = 0;
    float pulgadas =0;

    //Ingreso metros
    printf("Por favor ingrese la distancia en metros\n");
    scanf("%f", &metros);

    //Calculo
    centimetros = metros * 100;
    pulgadas = metros * 39.37;

    //Salida
    printf("\n");
    printf("Su distancia en centimetros es %g\n", centimetros);
    printf("Su distancia en pulgadas es %.2f", pulgadas);
    printf("\n");

    return 0;
}
