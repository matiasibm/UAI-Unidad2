#include <stdio.h>**
#include <stdlib.h>

int main()
{
    //Variables
    int total_mujeres = 0;
    int total_hombres = 0;
    int porcentaje_mujeres = 0;
    int porcentaje_hombres = 0;
    int total_alumnos = 0;

    //Ingreso estudiantes
    printf("Ingrese cantidad de alumnes mujeres\n");
    scanf("%d", &total_mujeres);

    printf("Ingrese cantidad de alumnes hombres\n");
    scanf("%d", &total_hombres);

    //Proceso porcentaje
    total_alumnos = total_hombres + total_mujeres;
    porcentaje_mujeres = (total_mujeres * 100) / total_alumnos;
    porcentaje_hombres = (total_hombres * 100) / total_alumnos;

    //Salida a pantalla
    printf("\n");
    printf("El porcentaje de hombres en el grupo es del %d%%\n", porcentaje_hombres );
    printf("El porcentaje de mujeres en el grupo es del %d%%\n", porcentaje_mujeres);

    return 0;
}
