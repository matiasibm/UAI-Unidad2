#include <stdio.h>
#include <stdlib.h>

int main()
{
        //Variables
    float sueldo_base = 0;
    float comision_mes = 0;
    float ventas_mes = 0;
    float total_sueldo_comision = 0;

    //Entrada sueldo y ventas
    printf("Ingrese su sueldo base\n");
    scanf("%f", &sueldo_base);

    printf("Ingrese la cantidad de ventas en su mes\n");
    scanf("%f", &ventas_mes);

    //Calculo comision y total
    comision_mes = (sueldo_base * 0.10) * ventas_mes;   //Creo que seria comosion_mes = ventas_mes * 0.10;
    total_sueldo_comision = comision_mes + sueldo_base;

    //Salida a pantalla
    printf("Usted recibira $%.2f de comisiones por las ventas del mes\n", comision_mes);
    printf("\n");
    printf("El total de su mes es de $%.2f", total_sueldo_comision);
    printf("\n");

    return 0;
}
