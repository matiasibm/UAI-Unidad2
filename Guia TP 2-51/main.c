#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    resultado = ((36 > 35) || (47 >= 47)) && (2 > 1);

    printf("El resultado es %d", resultado);

    return 0;
}
