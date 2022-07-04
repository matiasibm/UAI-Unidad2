#include <stdio.h>
#include <stdlib.h>


int main()
{
    int P, Q, T;


    P = 1;
    Q = 1;
    T = P && Q;
    printf("El valor de T es: %d \n", T);

    P = 1;
    Q = 0;
    T = P && Q;
    printf("El valor de T es: %d \n", T);

    P = 0;
    Q = 1;
    T = P && Q;
    printf("El valor de T es: %d \n", T);

    P = 0;
    Q = 0;
    T = P && Q;
    printf("El valor de T es: %d \n", T);


    return 0;
}
