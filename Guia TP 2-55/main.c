#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    //verdadero
    resultado = ((24 > 3) || (57 != 57)) || (990 == 991);

    printf("El resultado es %d\n", resultado);

    //falso
    resultado = ((490 < 480) || (666 <= 663)) || (31 <= 30);

    printf("El resultado es %d\n", resultado);

    return 0;
}
