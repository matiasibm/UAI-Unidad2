#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    //(P ^ Q) v ¬(Q v R)

    resultado = ((3 < 1) && (2 < 1)) || !((2 < 1) || (50 > 3));

            //  (f and f)|| !(f or v)
            //  (f)      || !(v)
            //  (f)      || f
            //           f
    printf("El resultado es %d\n", resultado);


    return 0;
}
