#include <stdio.h>
#include <stdlib.h>

/*
    Me quedaría con la primer alternativa, porque el enunciado dice que se ingresa largo y alto.
    Ademas el 0.5 está dentro de una variable lo cual es mejor que tener los "0.5" sueltos por el código.

*/
int main()
{
     //Alternativa que primero use
    //Declaracion variables
//    float arenaXm2 = 0.5;
//    float largoPared = 0;
//    float altoPared = 0;
//    float arenaXtrabajo = 0;
//
//    //Entradas alto y largo
//    printf("Ingrese el largo de la pared:\n");
//    scanf("%f", &largoPared);
//
//    printf("Ingrese el alto de la pared:\n");
//    scanf("%f", &altoPared);
//
//    //Calculo arena total
//    arenaXtrabajo = largoPared * altoPared * arenaXm2 / 1;
//
//    //Salida
//    printf("%g m3 de arena es lo que necesitas para revocar la pared", arenaXtrabajo);


    //Alternativa que use despues
    //Delaracion
    float metrosPared = 0;
    float arenaXrevoque = 0;

    //Ingreso metros pared
    printf("Ingrese los metros de la pared a revocar:\n");
    scanf("%f", &metrosPared);

    //Calculo arena
    arenaXrevoque = metrosPared * 0.5;

    //Salida
    printf("%g m3 de arena es lo que necesitas para revocar la pared\n", arenaXrevoque);

    return 0;
}
