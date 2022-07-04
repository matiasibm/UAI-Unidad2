#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables
    int digito1 = 0;
    int digito2 = 0;
    int digito3 = 0;
    int ingresado = 0;

    //Entrada digitos
    printf("Ingrese primer digito :\n");
    scanf("%d", &digito1);

    printf("Ingrese segundo digito :\n");
    scanf("%d", &digito2);

    printf("Ingrese tercer digito\n");
    scanf("%d", &digito3);

    //Proceso * +
    ingresado = digito1 * 100 + digito2 * 10 + digito3;

    //Salida a pantalla
    printf("Usted ingreso %d", ingresado);

    return 0;
}
