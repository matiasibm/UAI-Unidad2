#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variables
    float numero = 0;
    float raiz_cuadrada = 0;

    //Ingreso numero
    printf("Ingrese un numero\n");
    scanf("%f", &numero);

    //Calculo
    raiz_cuadrada = sqrt(numero);

    //Salida
    printf("\n");
    printf("Su raiz cuadrada es %g", raiz_cuadrada);
    printf("\n");

    return 0;
}
