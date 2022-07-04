#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    //(P ^ Q) v (Q v ¬R)

    //Verdadero
    resultado = ((35 >= 35)  && (76 <= 67 )) || ((6 > 7 ) || (!( 889 != 889)));

    printf ("El resultado es %d\n", resultado);

    //Falso

    resultado = (( 67 == 67) && (989 > 989)) || (( 989 > 989) || (!(567 >= 557)));

    printf("El resultado es %d\n", resultado);

    return 0;
}
