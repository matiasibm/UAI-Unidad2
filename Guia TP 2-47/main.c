#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int P,Q,R,resultado;

    P = false;
    Q = false;
    R = false;

    resultado = (P || Q) || R;

    printf("El resultado es %d\n", resultado);

    P = true;
    Q = false;
    R = true;

    resultado = (P || Q) || R;

    printf("El resultado es %d\n", resultado);

    P = true;
    Q = true;
    R = true;

    resultado = (P || Q) || R;

    printf("El resultado es %d\n", resultado);

    P = false;
    Q = false;
    R = true;

    resultado = (P || Q) || R;

    printf("El resultado es %d\n", resultado);

    return 0;
}
