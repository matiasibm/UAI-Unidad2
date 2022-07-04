#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float precio_articulo = 0;
    float cantidad_articulo = 0;
    float total_a_pagar = 0;

    //Ingreso precio y cantidad
    printf("Ingrese el precio de su producto\n");
    scanf("%f", &precio_articulo);

    printf("Ingrese la cantidad a comprar\n");
    scanf("%f", &cantidad_articulo);

    //Calculo
    total_a_pagar = (precio_articulo * cantidad_articulo) * 1.21;

    //Salida pantalla
    printf("\n");
    printf("El total a pagar es de $%.2f", total_a_pagar);
    printf("\n");

    return 0;
}
