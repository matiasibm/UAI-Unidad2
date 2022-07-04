#include <stdio.h>
#include <stdlib.h>
int main()
{
    int P,Q,R,resultado;

    P = (24 < 25); //true
    Q = (1 >= 1);  //true
    R = (3 != 2);  //true

    resultado = (P && (!Q)) && R;

    printf("El resultado es %d\n", resultado);

    P = (54 >= 55); //false
    Q = (14 != 14); //false
    R = (2 == 2);  //true

    resultado = (P && (!Q)) && R;

    printf("El resultado es %d\n", resultado);

    P = (541 == 541); //true
    Q = (3 != 3); //false
    R = (1457 >= 1457); //true

    resultado = (P && (!Q)) && R;

    printf("El resultado es %d\n", resultado);

    return 0;
}
