#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    //             (P         ^         Q)      v   ¬ (Q        ^       R)       v      ¬ P
    resultado = (((40 >= 40) && (8769 != 8769)) || (!(31 == 81) && (325 > 335))) || (!(40 >=40));
    //       v       and      f         ||  (! ( f)     and    (v)       ||  (!  (v)
    //       v       and       f        ||    v         and     f        ||    f
    //                f                 ||                f              ||    f
    //                                 f                                 ||   f
    //                                                         falso

    printf("El resultado es %d\n", resultado);














    return 0;
}
