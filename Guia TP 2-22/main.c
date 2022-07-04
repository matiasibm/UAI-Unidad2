#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaracion variables
    int billete2 = 0;
    int billete5 = 0;
    int billete10 = 0;
    int billete20 = 0;
    int billete50 = 0;
    int billete100 = 0;
    int billete200 = 0;
    int billete500 = 0;
    long int total = 0;

    //Entradas billetes
    printf("Ingrese cuantos billetes de $2 tiene: ");
    scanf("%d", &billete2);

    printf("Ingrese cuantos billetes de $5 tiene: ");
    scanf("%d", &billete5);

    printf("Ingrese cuantos billetes de $10 tiene: ");
    scanf("%d", &billete10);

    printf("Ingrese cuantos billetes de $20 tiene: ");
    scanf("%d", &billete20);

    printf("Ingrese cuantos billetes de $50 tiene: ");
    scanf("%d", &billete50);

    printf("Ingrese cuantos billetes de $100 tiene: ");
    scanf("%d", &billete100);

    printf("Ingrese cuantos billetes de $200 tiene: ");
    scanf("%d", &billete200);

    printf("Ingrese cuantos billetes de $500 tiene: ");
    scanf("%d", &billete500);

    //Calculo total
    total = (billete2 * 2) + (billete5 * 5) + (billete10 * 10) + (billete20 * 20) + (billete50 * 50) + (billete100 * 100) + (billete200 * 200) + (billete500 * 500);

    //Salida total
    printf("\n");
    printf("Usted tiene $%d en total\n", total);

    return 0;
}
