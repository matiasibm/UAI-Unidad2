#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables
    float salario = 0;
    float nuevoSalario = 0;

    //Ingreso salario
    printf("Ingrese su salario: ");
    scanf("%f", &salario);

    //Calculo nuevo salario
    nuevoSalario = salario - (salario * 0.2);   //Otra forma de hacerlo es nuevoSalario = salario * 0.8

    //Salida
    printf("Su nuevo salario es de $%g", nuevoSalario);

    return 0;
}
