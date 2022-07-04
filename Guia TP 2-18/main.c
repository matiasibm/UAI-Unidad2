#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables
    float descuentoMedicamentos = 35;
    float descuentoTotal = 0;
    float valorConDescuento = 0;
    float valorMedicamento = 0;

    //Entrada valor medicamento
    printf("Ingrese el valor del medicamento\n");
    scanf("%f", &valorMedicamento);

    //Proceso (* / -)
    descuentoTotal = (valorMedicamento * descuentoMedicamentos) / 100;
    valorConDescuento = valorMedicamento - descuentoTotal;

    //Salida a pantalla
    printf("Usted debera pagar $%g\n",valorConDescuento);
    printf("Su descuento fue de $%g ",descuentoTotal);

    return 0;
}
