#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool P, Q, T;

    P = true;
    Q = true;
    T = P && Q;
    printf("El valor de T es: %d \n", T);

    P = true;
    Q = false;
    T = P && Q;
    printf("El valor de T es: %d \n", T);

    P = false;
    Q = true;
    T = P && Q;
    printf("El valor de T es: %d \n", T);

    P = false;
    Q = false;
    T = P && Q;
    printf("El valor de T es: %d \n", T);


    return 0;
}
