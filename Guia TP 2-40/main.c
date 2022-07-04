#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variables
    float area = 0;
    float radio = 0;
    float pi = 3.141592;

    //Ingreso radio
    printf("Ingrese el radio\n");
    scanf("%f", &radio);

    //Calculo area
    area = pi * pow(radio, 2);

    //Salida
    printf("\n");
    printf("El area del circulo es %.2f metros cuadrados", area);
    printf("\n");

    return 0;
}
