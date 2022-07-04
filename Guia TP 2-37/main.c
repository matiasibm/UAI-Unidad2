#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float peso_kg = 0;
    float gramos = 0;
    float libras = 0;
    float toneladas = 0;

    //Ingreso peso
    printf("Ingrese su peso en KG\n");
    scanf("%f", &peso_kg);

    //Calculo
    gramos = peso_kg * 1000;
    libras = peso_kg * 2.205;
    toneladas = peso_kg /  1000;

    //Salida
    printf("Su peso en gramos es %g\n", gramos);
    printf("Su peso en libras es %g\n", libras);
    printf("Su peso en toneladas es %g", toneladas);

    return 0;
}
