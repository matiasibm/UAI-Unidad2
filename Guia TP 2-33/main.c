#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float examen_1 = 0;
    float examen_2 = 0;
    float examen_3 = 0;
    float promedio = 0;

    //Entrada examenes
    printf("Ingrese la nota de su primer parcial\n");
    scanf("%f", &examen_1);

    printf("Ingrese la nota de su segundo parcial\n");
    scanf("%f", &examen_2);

    printf("Ingrese la nota de su tercer parcial\n");
    scanf("%f", &examen_3);

    //Proceso promedio
    promedio = (examen_1 + examen_2 + examen_3 ) / 3;
    printf("\n");

    //Salida a pantalla
    printf("El promedio de sus notas es %.2f", promedio);
    printf("\n");

    return 0;
}
