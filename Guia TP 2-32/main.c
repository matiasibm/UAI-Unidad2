#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float totalCompra = 0;
    float totalConDescuento = 0;

    //Entrada totalCompra
    printf("Ingrese el total de su compra para calcular el descuento\n");
    scanf("%f", &totalCompra);

    //Proceso
    totalConDescuento = totalCompra * 0.75;

    //Salida a pantalla
    printf("Usted debera abonar $%g", totalConDescuento);
    printf("\n");

    return 0;
}
