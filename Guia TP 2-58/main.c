#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    //(P ^ Q) v (Q ^ R)

    //Falso
    resultado = ((7698 >= 7698) && (1132 < 1122)) || ((1132 < 1122) && (54332 >= 54332));

    printf("El resultado es %d\n", resultado);

    //Verdadero
    resultado = ((6545 != 6545) && (381 < 681)) || ((381 < 681) && (3121 > 3101));

    printf("El resultado es %d\n", resultado);

    return 0;
}
