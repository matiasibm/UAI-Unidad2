#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    float cotizDolar = 0;
    float cotizEuro = 0;
    float pesos = 0;
    float cambioDolar = 0;
    float cambioEuro = 0;

    //Ingreso cotiz.dolar
    printf("Ingrese cotizacion dolar hoy:\n");
    scanf("%f", &cotizDolar);

    //Ingreso cotiz.euro
    printf("Ingrese cotizacion euro hoy:\n");
    scanf("%f", &cotizEuro);

    //Ingreso pesos
    printf("Ingrese pesos a cambiar:\n");
    scanf("%f", &pesos);

    cambioDolar = pesos / cotizDolar;
    cambioEuro = pesos / cotizEuro;

    //Salida a pantalla
    printf("%10.2f pesos equivalen a %.2f dolares y a %.2f euros", pesos,cambioDolar, cambioEuro);

   return 0;
}
