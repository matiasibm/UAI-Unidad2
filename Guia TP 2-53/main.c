#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;


    resultado = ((( 1234 > 1233  ) && ( 23 != 23 )) || (( 54 < 53   ) && ( 567 >= 568 ) ))  &&  (!(1234 > 1233));
                //     P          and        Q     or        Q       and        R         and     ! P
                //     v          and       f      or        f       and      f           and    f
                //                f                or                 f                   and    f
                //                                 f                                      and    f

    printf ("El resultado es %d\n", resultado);

    resultado = (((2345 > 2354)  &&  (  45 > 35 )) ||  (( 1 > 0) && ( 356 >= 356)))  && (!(4 != 4));

    printf ("El resultado de %d\n", resultado);

    return 0;
}
