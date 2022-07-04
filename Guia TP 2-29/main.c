#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables
    int anos = 0;
    int meses = 0;
    int edadMeses = 0;

    printf("Ingrese su edad en anos y meses \n");
    printf("\n");

    //Entrada anos y meses
    printf("Ingrese anos\n");
    scanf("%d", &anos);

    printf("Ingrese cuantos meses lleva \n");
    scanf("%d", &meses);

    //Proceso
    edadMeses = (anos * 12) + meses;

    //Salida
    printf("Usted tiene %d meses", edadMeses);

    return 0;
}
