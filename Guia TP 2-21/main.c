#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    float presupuestoAnual = 0;
    float pediatria = 0;
    float urgencias = 0;
    float traumatologia = 0;
    float calculoPediatria = 0;
    float calculoUrgencias = 0;
    float calculoTraumatologia = 0;

    //Entradas
    printf("Ingrese el presupuesto anual del hospital\n");
    scanf("%f", &presupuestoAnual);

    printf("Ingrese el porcentaje  del area de pediatria\n");
    scanf("%f", &pediatria);

    printf("Ingrese el porcentaje del area de urgencias\n");
    scanf("%f", &urgencias);

    printf("Ingrese el porcentaje del area de traumatologia\n");
    scanf("%f", &traumatologia);

    //Proceso
    calculoPediatria = (presupuestoAnual * pediatria) / 100;
    calculoUrgencias = (presupuestoAnual * urgencias) / 100;
    calculoTraumatologia = (presupuestoAnual * traumatologia) / 100;

    //Salida caculo
    printf("\n");
    printf("Al area de Pediatria le corresponde $%.2f\n", calculoPediatria);
    printf("Al area de Urgencias le corresponde $%.2f\n", calculoUrgencias);
    printf("Al area de Traumatologia le corresponde $%.2f\n", calculoTraumatologia);

    //Salida porcentajes
    printf("\n");
    printf("El porcentaje del area Pediatria es de %g%%\n", pediatria);
    printf("El porcentaje del area Urgencias es de %g%%\n", urgencias);
    printf("El porcentaje del area Traumatologia es de %g%%\n", traumatologia);

    return 0;
}
