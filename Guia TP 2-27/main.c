#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Variables
    float numero_a  = 0;
    float numero_b  = 0;
    float result_1 = 0;
    float result_2 = 0;

    //Entrada A B
    printf("Ingrese el primer numero \n");
    scanf("%f", &numero_a);

    printf("Ingrese el segundo numero \n");
    scanf("%f", &numero_b);

    //Calculos 1 , 2
    result_1 = (2 * numero_a) + pow(numero_b, 2);
    result_2 = (pow(numero_a, 3) + pow(numero_b, 3)) / 2;

    //Salida a pantalla
    printf("\n");
    printf("La suma del doble del primero mas el cuadrado del segundo es : %.2f\n", result_1);
    printf("El promedio de sus cubos es : %.2f", result_2);

    return 0;
}
