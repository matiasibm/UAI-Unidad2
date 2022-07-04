#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    int interesAnual = 27;
    int anosDevolucion = 0;
    float pesos = 0;
    float interesParcial = 0;
    float interesFinal = 0;

    //Entrada pesos
    printf("Ingrese la cantidad (en pesos) que quiere solicitar: \n");
    scanf("%f", &pesos);

    //Entrada años
    printf("En cuantos anos quiere devolverlos: \n");
    scanf("%d", &anosDevolucion);

    //Proceso calculo interes
    interesParcial= pesos * interesAnual;
    interesFinal= (interesParcial / 100) * anosDevolucion;

    //Salida por pantalla
    printf("Usted pagara %g pesos de intereses por dicho prestamo", interesFinal);

    return 0;
}
