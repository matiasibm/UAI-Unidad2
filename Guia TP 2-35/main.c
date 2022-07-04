#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int salario = 0;
    int nuevo_salario = 0;

    //Ingreso salario
    printf("Ingrese su salario actual\n");
    scanf("%d", &salario);

    //Proceso incremento
    nuevo_salario = salario * 0.25 + salario; //Otra manera nuevo_salario = salario * 1.25

    //Salida a pantalla
    printf("Su nuevo salario es de $%d pesos", nuevo_salario);

    return 0;
}
