#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float dinero_a_invertir = 0;
    float dinero_con_interes = 0;
    //float interes_anual = 0;

    //Ingreso dinero
    printf("Ingrese cuanto dinero desea invertir en nuestro banco (tasa 5.5 %% mensual)\n");
    scanf("%f", &dinero_a_invertir);

    //Proceso dinero con interes
    dinero_con_interes = ((dinero_a_invertir * 0.055) * 12) + dinero_a_invertir;
    //interes_anual = (dinero_a_invertir * 0.055) * 12;

    //Salida
    printf("\n");
    printf("Despues de un ano usted recibira $%.2f\n", dinero_con_interes);
    //printf("Su interes anual es de $%.2f", interes_anual );
    //Si queremos mostrar en pantalla de cuanto es el interes anual, descomentar
    printf("\n");

    return 0;
}
