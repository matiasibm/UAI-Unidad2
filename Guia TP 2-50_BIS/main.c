#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P,Q,R,resultado;
    int x, y, z;

    x = 34;
    y = 128;
    z = 44;

    resultado = ((x >= 35) && (y != 128)) || (z == 44);
    printf("El resultado es %d\n", resultado);


    resultado = ((11 != 12) && (1 < 546)) || (3 == 4);
    printf("El resultado es %d\n", resultado);

    return 0;
}
