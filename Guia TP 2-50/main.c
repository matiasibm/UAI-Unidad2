#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P,Q,R,resultado;

    P = (34 >= 35); //false
    Q = (128 != 128); //false
    R = (44 == 44); //true

    resultado = (P && Q) || R;

    printf("El resultado es %d\n", resultado);
    P = (11 != 12); //true
    Q = (1 > 546); //false
    R = (3 == 2); //false

    resultado = (P && Q) || R;

    printf("El resultado es %d\n", resultado);

    return 0;
}
