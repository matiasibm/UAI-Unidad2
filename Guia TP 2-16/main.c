#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    int costoHora = 15;
    int horasRegaladas = 0;
    float horasContratadas = 0;
    float horasAPagar = 0;
    float precioPromocion = 0;

    //Entrada horasContratadas
    printf("Ingrese cuantas horas quiere contratar \n");
    scanf("%f", &horasContratadas);

//    //Alternativa 0
//    horasRegaladas = horasContratadas / 5;
//    precioPromocion = (horasContratadas - horasRegaladas) * costoHora;
//
    //Alternativa 1
    horasRegaladas = horasContratadas / 5;
    horasAPagar = horasContratadas - horasRegaladas;
    precioPromocion = horasAPagar * costoHora;

//    Alternativa 2
//    horasRegaladas = horasContratadas / 5;
//    int precioNormal = horasContratadas * costoHora;
//    int precioRegalado = horasRegaladas * costoHora;
//    precioPromocion = precioNormal - precioRegalado;

    //Salida a pantalla
    printf("Usted debera pagar: %g \n", precioPromocion);
    printf("La cantidad de horas regaladas es: %d", horasRegaladas);

    return 0;
}
