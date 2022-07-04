#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int P , Q ,resultado;

    P = true;
    Q = true;

    resultado = P && (!Q);

    printf("El resultado es:%d\n", resultado);

    P = true;
    Q = false;

    resultado = P && (!Q);

    printf("El resultado es:%d\n", resultado);

    P = false;
    Q = true;

    resultado = P && (!Q);

    printf("El resultado es:%d\n", resultado);

    P = false;
    Q = false;

    resultado = P && (!Q);

    printf("El resultado es:%d\n", resultado);

    return 0;
}
