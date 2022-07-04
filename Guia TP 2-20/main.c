#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    float urgencias = 0;
    float pediatria = 0;
    float traumatologia = 0;
    float presupuestoAnual = 0;

    //Entrada Presp.Anual
    printf("Ingrese el presupuesto anual del hospital\n");
    scanf("%f", &presupuestoAnual);

    //Proceso
    urgencias = presupuestoAnual * 0.37;
    pediatria = presupuestoAnual * 0.42;
    traumatologia = presupuestoAnual * 0.21;

    //Salida
    printf("El presupuesto de Urgencias es de $%.2f\n", urgencias);
    printf("El presupuesto de Pediatria es de $%.2f\n", pediatria);
    printf("El presupuesto de Traumatologia es de $%.2f", traumatologia);

    return 0;
}
