#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int P,Q,R,resultado;

    P = true;
    Q = false;
    R = true;

    resultado = (P && Q) || (!R);

    printf("El resultado es %d\n", resultado);

    P = (3 <= 5); //falso
    Q = (2 == 2); //verdadero
    R = (2 > 3);  //falso

    resultado = (P && Q) || (!R);

    printf("El resultado es %d\n", resultado);

    return 0;
}
