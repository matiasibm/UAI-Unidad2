#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    resultado = ((12 >= 14) && (1 != 2)) || ((345 <= 36) && (20 > 21));

    printf("El resultado es %d\n", resultado);

    resultado = ((37 > 35) && (2 == 2)) || ((1 > 4) && (32 < 1));

    printf("El resultado es %d\n", resultado);

    return 0;
}



