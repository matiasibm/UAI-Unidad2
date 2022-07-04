#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    float precioKilometro = 10.5;
    float kilometrosRecorridos = 0;
    float precioBoleto = 0;

    //Entrada kilometrosRecorridos
    printf("Ingrese cuantos kilometros desea recorrer...\n");
    scanf("%f", &kilometrosRecorridos);

    //Proceso multiplicacion
    precioBoleto = kilometrosRecorridos * precioKilometro;

    //Salida a pantalla
    printf("El precio de su boleto es de: %g pesos", precioBoleto);

    return 0;
}
